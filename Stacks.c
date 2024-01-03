#include<stdio.h>
#include<stdlib.h>

struct Stack{
	int size;
	int top;
	int* arr;
};
struct Stack* initialize(struct Stack* stck,int size){
	stck=(struct Stack*)malloc(sizeof(struct Stack));
	stck->size= size;
	stck->top= -1;
	stck->arr=(int*)malloc(stck->size*sizeof(int));
}
int isEmpty(struct Stack* stck){
	/*if(stck->top==-1) return 1;
	return 0;*/
	return (stck->top==-1);
}
int isFull(struct Stack* stck){
	return(stck->top== stck->size-1);
}
struct Stack* push(struct Stack* stck,int data){
	if(isFull(stck)) printf("Stack Overflow");
	else{
		stck->top++;
		stck->arr[stck->top]=data;
	}
	return stck;
}
int pop(struct Stack* stck){
	int popped_element;
	if(isEmpty(stck)){
		printf("\nStack Underflow");
		return -1;
	}
	else{
		popped_element=stck->arr[stck->top];
		stck->top--;
	}
	return popped_element;
}
int stacktop(struct Stack* stck){
	return stck->arr[stck->top];
}
int stackbottom(struct Stack* stck){
	return stck->arr[0];
}
void display(struct Stack* stck){
	int i;
	for (i=0;i< (stck->top)+1;i++){
		printf("%d ",stck->arr[i]);
	}
}
int main(){
	
	struct Stack* stck=initialize(stck,10);
	/*if (isEmpty(stck)) printf("\nStack is empty");
	else printf("\nStack is not empty");
	
	if (isFull(stck)) printf("\nStack is Full");
	else printf("\nStack is not Full");
	
	stck=push(stck,10);
	if (isEmpty(stck)) printf("\nStack is empty");
	else printf("\nStack is not empty");*/
	
	
	stck=push(stck,10);
	stck=push(stck,20);
	stck=push(stck,30);
	stck=push(stck,40);
	stck=push(stck,50);
	/*printf("%d" , stck->top+1);
	printf("\n%d" , stck->arr[0]);
	printf("\n%d" , stck->arr[1]);
	printf("\n%d" , stck->arr[2]);
	printf("\n%d" , stck->arr[3]);
	printf("\n%d" , stck->arr[4]);*/
	display(stck);
	pop(stck);
	printf("\n");
	display(stck);
	printf("\nTop is %d ",stacktop(stck));
	printf("\nBottom is %d ",stackbottom(stck));
	
	
}
