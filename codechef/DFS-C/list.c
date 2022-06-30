#include <stdio.h>
#include <stdlib.h>

struct node{
  int count;
  int list[20];
};

struct node *insert(struct node *head,int data){
  int temp;
  temp=head->count;
    head->list[temp]=data;
    head->count++;
return head;
}

void delete(struct node *head,int position){

  int i=position;
  
  while(i!=head->count){
  head->list[i]=head->list[i+1];
  i++;
  }
  head->count--;
}

void print(struct node *head){
  int temp=head->count;
    int i=1;
    while(i!=temp){
      printf("%d ",head->list[i]);
      i++;
    }
}    

int main(){
  struct node *head;
  head=(struct node *)malloc(sizeof(struct node));
  head->count=1;
 // printf("%d",head->count);
  head=insert(head,10);
  insert(head,20);
  insert(head,30);
  insert(head,40);
  insert(head,50);
  insert(head,50);
//  print(head);

  delete(head,4);
  print(head);
  return 0;
}