#include<stdio.h>
#include<stdlib.h>

struct Queue{
	int data;
	struct Queue* next;
};
struct Queue* top1=NULL;
struct Queue* top2=NULL;

int isEmpty(struct Queue* top){
	return (top==NULL);
}
int isFull(struct Queue* top){
	struct Queue* newstck=(struct Queue*)malloc(sizeof(struct Queue));
	return (newstck==NULL);
}
void push(struct Queue* top,int data){
	struct Queue* node=(struct Queue*)malloc(sizeof(struct Queue));
	node->data=data;
	node->next=top;
	top=node;
}
int pop(struct Queue* top){
	if(isEmpty(top)){
		printf("\nQueue Underflow");
		return -1;
	}
	int poppedElement=top->data;
	struct Queue* newtop=top;  
	top=top->next;
	free(newtop);
	return poppedElement;
}
void enqueue(struct Queue* top,int data){
	if(isFull(top)) printf("Queue Overflow\n");
	else{
		push(top,data);
	}
}
int dequeue(){
	
	if(isEmpty(top2)){
		push(top1,pop(top2));
		int dq=pop(top2);
		return dq;
	}
	else{
		pop(top2);
		
	}
}
int main(){
	struct Queue* Q=(struct Queue*)malloc(sizeof(struct Queue));
	enqueue(top1,10);
	

}

