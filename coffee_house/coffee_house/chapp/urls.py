from django.urls import path
from chapp import views
urlpatterns = [
    path('', views.home, name='home'),
]