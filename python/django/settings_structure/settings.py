# Settings for Production/Development

IS_PRODUCTION = False

if IS_PRODUCTION:
    from .conf.production.settings import *
else :
    from .conf.development.settings import *
