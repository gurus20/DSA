#include <stdio.h>

    int sum=4;
    int arr[3]={1,2,3};
    int count = 0;
    int j;

void set(int temp,int i){
   int sol[4];

   temp=temp+arr[i];
    sol[j]=arr[i];    
   if(temp==sum){
       count++;
       return;
   }

   else{
       set(temp,i);
   }
  i++;
  temp=0;
  i=0;
  set(temp,i);
     
}

int main(){
    int i=0,temp=0;
    set(temp,i);
    printf("%d",count);
    return 0;
}

/*
int i=0,j;
    int temp;

        for(j=0;j<3;j++){
            temp=arr[i]+arr[j];

            if(temp>sum){
                return;
            }
            if(temp==sum){
                count++;
                return;
            }
*/