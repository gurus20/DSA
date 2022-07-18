////// ************************************************************* Sort an array using stack *************************************************************************** ///////////

#include<stdio.h>
#include<stdlib.h>

struct Stack{
	int data; 
	struct Stack* next;
};

int IsEmpty(struct Stack *top){
	return (top == NULL) ? 1 :0;
}

int Top(struct Stack *top){
	return (top->data);
}

void Push(struct Stack** top, int x){
	struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack));
	
	stack->data = x;
	stack->next = *top;
	*top = stack;
}

int Pop(struct Stack **top){
	struct Stack *temp = *top;
	int x= temp->data;
	*top = temp->next;
	free(temp);
	return x;
}

void SortStack(struct Stack **top, int x){
	if(IsEmpty(*top) || Top(*top) > x){
		Push(top, x);
		return;
	}
	int item = Pop(top);
	SortStack(top, x);
	
	Push(top, item);
}

void Sort(struct Stack** top, int n){
	if(!IsEmpty(*top)){
		int x = Pop(top);
		Sort(top, n);
		
		SortStack(top, x);
	}
	return;
}

int main(void){
	int i, arr[5]= {5, 1, 4, 3 ,2
	};
	int n = sizeof(arr)/sizeof(arr[0]);
	struct Stack *temp_stack = NULL;

	printf("Array is : ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
		Push(&temp_stack, arr[i]);
	}
	printf("\n");	
	Sort(&temp_stack,n);
	i = 0;
	printf("Sorted array is : ");
	while(temp_stack != NULL){
		arr[i]= temp_stack->data;
		temp_stack = temp_stack->next;
		printf("%d ",arr[i]);
		i++;
	}
	return 0;
}