#include <stdio.h>
#include <stdlib.h>

void push(int *arr,int *top){
    int data;
    scanf("%d",&data);
    if(*top==5){
        printf("NO MORE PUSH\n");
        return ;
    }
    else
    {
        ++(*top);
        arr[*top]=data;
    }
}

int pop(int *arr,int *top){
    int data;
    if(*top==-1){
        printf("EMPTY QUEUE\n");
        
    }
    else{
        data=arr[0];
        printf("%d is popped\n",data);
        for(int i=1;i<=(*top);i++){
        arr[i-1]=arr[i];
        }
        (*top)--;
    }
    return data;
}

int main(){
    int arr[5];
    int top=-1;
    
    push(arr,&top);
    push(arr,&top);
    push(arr,&top);
    
    printf("\n");
    pop(arr,&top);
    pop(arr,&top);
    pop(arr,&top);
    pop(arr,&top);
    pop(arr,&top);
    pop(arr,&top);
    
    return 0;
}