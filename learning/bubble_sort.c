#include <stdio.h>

int  swap(int *a,int *b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  //return *a ,*b ;
}

int main(){
  int i,j,n=5,x=5;
  int arr[5]={11,5,472,2,89};

  do
  {
  for(i=1;i<=n-1;i++){
    if(arr[i-1]>arr[i]){
      swap(&arr[i-1],&arr[i]);
      }
    }
  n--;
  }while(n!=0);
  for(i=0;i<=x-1;i++){
    printf("%d\n",arr[i]);
   }
  }
