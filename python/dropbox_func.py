import dropbox
from dropbox.exceptions import AuthError

def dropbox_get_link(dbx, dropbox_file_path):
    try:
        shared_link_metadata = dbx.sharing_create_shared_link_with_settings(dropbox_file_path)
        shared_link = shared_link_metadata.url
        return shared_link.replace('?dl=0', '?dl=1')
    except dropbox.exceptions.ApiError as exception:
        if exception.error.is_shared_link_already_exists():
            shared_link_metadata = dbx.sharing_get_shared_links(dropbox_file_path)
            shared_link = shared_link_metadata.links[0].url
            return shared_link.replace('?dl=0', '?dl=1')

def dropbox_view(request):
    service = Services.objects.get(slug='python-development-web-application')

    img = ''
    try:
        dbx = dropbox.Dropbox(TOKEN)
        shared_folder_link = "https://www.dropbox.com/sh/810hzf11zwoeobv/AADCv1myN6FmiVPR2Ca_-93Ra?dl=0"
        file_result = dbx.sharing_get_shared_link_file(url=shared_folder_link, path='/icon/'+service.icon.url.split('/')[-1])
        img = file_result[0].url.replace('?dl=0', '?dl=1')

    except AuthError as e:
        print('Error connecting to Dropbox with access token: ' + str(e))

    return render(request,'dropbox.html', {'img':img})
