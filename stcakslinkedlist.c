#include<stdio.h>
#include<stdlib.h>
struct Stack{
	int data;
	struct Stack *next;
};

struct Stack* top=NULL;

int isEmpty(){
	return (top==NULL);
}
int isFULL(){
	struct Stack* newstck=(struct Stack*)malloc(sizeof(struct Stack));
	return (newstck==NULL);
}
void push(int data){
	struct Stack* temp=(struct Stack*)malloc(sizeof(struct Stack));
	temp->data=data;
	temp->next=top;
	top=temp;
	
	
}
int pop(){
	if(isEmpty()){
		printf("\nStack is Underflow");
		return -1;
	}
	int poppedElement=top->data;
	struct Stack* newtop=top;  
	top=top->next;
	free(newtop);
	return poppedElement;
}
int peek(struct Stack* top,int pos){
	struct Stack* curr=top;
	int i;
	for(i=1;i<pos && curr!=NULL;i++){
		curr=curr->next;
	}
	if(curr==NULL) {
		printf("Invalid position");
		return -1;
	}
	return curr->data; 
}
void display(){
	if (isEmpty()) {
		printf("Stack Empty\n");
	}
	else{
		struct Stack* temp=top;
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}
}

int main(){
	struct Stack* stck=(struct Stack*)malloc(sizeof(struct Stack));
	
	display();
	push(10);
	push(20);
	push(30);
	push(40);
//	printf("\n%d",top);
//	printf("\n%d",top->next);
//	printf("\n%d",top->next->next);
//	printf("\n%d",top->next->next->next);
//	printf("\n%d\n ",top->next->data);
	display();
	
	printf("\nPopped elementis %d\n",pop());
	display();
	return 0;
}
