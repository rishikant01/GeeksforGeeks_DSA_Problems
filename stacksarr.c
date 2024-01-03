#include<stdio.h>
#include<stdlib.h>

struct stack{
	int size;
	int* arr;
	int top;
};
struct stack* createstack(int size){
	struct stack* stck=(struct stack*)malloc(sizeof(struct stack));
	stck->size=size;
	stck->top=-1;
	stck->arr=(int*)malloc(stck->size*sizeof(int));
	return stck;
}
int isEmpty(struct stack* stck){
	if (stck->top==-1) return 1;
	else return 0;
}
int isFull(struct stack* stck){
	if (stck->top==stck->size-1) return 1;
	else return 0;
}
struct stack* push(struct stack* stck,int data){
	if (isFull(stck)) printf("Stack Overflow by %d\n",data);
	else {
		stck->top++;
		stck->arr[stck->top]=data;
	}
	return stck;
}
int pop(struct stack* stck){
	if(isEmpty(stck)) {
		printf("Stack Underflow\n");
		return -1;
	}
	else{
		int poppedelement=stck->arr[stck->top];
		stck->top--;
		return poppedelement;
	}
}
void display(struct stack* stck){
	int i;
	for(i=0;i<=stck->top;i++)
	printf("%d ",stck->arr[i]);
}
int peek(struct stack* stck,int pos){
	if (stck->top-pos+1<0 || pos<0){
		printf("Invalid Position");
		return -1;
	}
	else{
		return stck->arr[stck->top-pos+1];
	}
}
int main(){
	struct stack* stck1=createstack(5);
	push(stck1,10);
	push(stck1,20);
	push(stck1,30);
	push(stck1,40);
	push(stck1,50);
	peek(stck1,3);
	//push(stck1,60);
	//display(stck1);
	
}
