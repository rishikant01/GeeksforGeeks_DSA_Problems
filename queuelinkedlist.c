#include<stdio.h>
#include<stdlib.h>
struct Queue{
	int data;
	struct Queue* next;
};

struct Queue* first=NULL;
struct Queue* last=NULL;

int isEmpty(){
	return(first==NULL);
}
int isFull(){
	struct Queue* node=(struct Queue*)malloc(sizeof(struct Queue));
	return(node==NULL);
}

void enqueue(int data){
	if(isFull()) printf("Queue overflow\n");
	else{
		struct Queue* node=(struct Queue*)malloc(sizeof(struct Queue));
		node->data=data;
		node->next=NULL;
		
		if(first==NULL){
			first=node;
			last=node;
		}
		else{
			last->next=node;
			last=node;
		}
	}
}

int dequeue(){
	if (isEmpty()) {
		printf("Queue underflow\n");
		return -1;
	}
	
		struct Queue* dqnode=first;
		int deElement=dqnode->data;
		first=first->next;
		free(dqnode);
		return deElement;
	
}
void display(){
	struct Queue* curr=first;
	while (curr!=last){
	printf("%d ",curr->data);
	}
}
int main(){
	dequeue();
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	enqueue(60);
	
	return 0;
}
