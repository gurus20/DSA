SECRET_KEY = 'django-insecure-a%x$ls*zb79og*5*77gihh@y9x7)we5v@$47f92!%)x17flaf+'

DEBUG = False

ALLOWED_HOSTS = ["www.thecodesure.com", "thecodesure.com", "https://thecodesure.com", "http://thecodesure.com"]

DATABASES = {
    'default': {
        'ENGINE': 'django.db.backends.mysql',
        'NAME': 'csappdb',
        'USER': 'gurdayal-s',
        'PASSWORD': 'xmenguru77',
        'HOST': 'localhost',
        'PORT': '5432',
    }
}
