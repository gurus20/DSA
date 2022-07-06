#include <stdio.h>

int fibo_s(){
  int i,l,n=1;
  scanf("%d",&l);
  int temp[l],arr[l];

    arr[1]=0;
    arr[2]=1; 
  for(i=2;i!=l+1;i++){
    arr[i+1]=arr[i]+arr[i-1];
    if(i%2==0){
      temp[n]=arr[i]%10;
      n++;
    }
  } 
  for(i=1;i<n;i++){
        printf("%d  ",temp[i]);
          }
 
    while(n!=1){
          l=1;
        for(i=1;i<n;i=i+2){
        temp[l]=temp[i+1];
          l++;
          }
          n=l-1;
      }
   return temp[1];
}

int main(){

  int t;
  scanf("%d",&t);
  while(t!=0){
  printf("%d ",fibo_s());
  t--;
  } 
 return 0; 
}