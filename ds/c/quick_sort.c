#include <stdio.h>

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void partition(int *arr, int l, int h){
    int pivot;
    pivot=arr[h];

    int i=l,j=h;

    while(i<j){
        while(arr[i]<pivot){
            i++;
            printf("%d",i);
        }
        while(arr[j>pivot]){
            j++;
        }
        if(arr[i]>pivot && arr[j]<pivot){
            swap(&arr[i],&arr[j]);
            i++;
            j--;
        }
    }
}

void quick_sort(int *arr,int l,int h){
    partition(arr,l,h);
}

int main(){
    int arr[20]={8, 23, 56, 32, 1, 33, 10, 98, 387, 34, 78, 44, 6, 9, 39, 54, 66, 45, 67, 6};
    int n=20;
    int l=0,h=n-1;
    int i;
    printf("unsorted Array ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    quick_sort(arr,h,l);
    printf("sorted array   ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}