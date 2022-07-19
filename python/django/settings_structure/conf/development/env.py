SECRET_KEY = 'django-insecure-a%x$ls*zb79og*5*77gihh@y9x7)we5v@$47f92!%)x17flaf+'

DEBUG = True

ALLOWED_HOSTS = ["*"]

import os
DB_PATH = os.path.join('C:\\','Users','vinay','Desktop','codesure')

DATABASES = {
    'default': {
        'ENGINE': 'django.db.backends.sqlite3',
        'NAME': DB_PATH + '/db.sqlite3',
    }
}