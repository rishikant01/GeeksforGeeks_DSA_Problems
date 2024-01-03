#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct Queue{
	int first;
	int last;
	int size;
	int* arr;
};
struct Queue*q;

void createQueue(int size){
	q=(struct Queue*)malloc(sizeof(struct Queue));
	q->first=0;
	q->last=0;
	q->size=size;
	q->arr=(int*)malloc(size*sizeof(int));
	int i;
	for(i=0;i<size;i++) //if negative no. then take int_min;
	q->arr[i]=-1;
	//return q;
}
int isEmpty(){
	return (q->first==q->last && q->arr[q->first]==-1);
}
int isFull(){
	return (q->last==q->first && q->arr[q->first]!=-1);
}

void Enqueue(int data){
	if(isFull())
	printf("Queue overflow\n");
	else{
		q->last=(q->last+1)%q->size;
		oiupyotiruy
		q->arr[q->last]=data;
	}
	
}
int Dequeue(){
	if(isEmpty()){
	printf("Queue Underflow\n");
	return INT_MIN; }
	int deqElement= q->arr[q->first]; //first ke ek aage h pehla element
	q->arr[q->first]=-1;
	q->first=(q->first+1)%q->size;
	return deqElement;

}

int main(){
	createQueue(5);
	if(isFull()) printf("Queue is full\n");
	else printf("Queue is NOT full\n");
	if(isEmpty()) printf("Queue is empty\n");
	else printf("Queue is NOT empty\n");
	
	Enqueue(10);
	Enqueue(20);
	Enqueue(30);
	Enqueue(40);
	Enqueue(50);
	printf("\n");
	if(isFull()) printf("Queue is full\n");
	else printf("Queue is NOT full\n");
	if(isEmpty()) printf("Queue is empty\n");
	else printf("Queue is NOT empty\n");
	
	
	Dequeue();
	Dequeue();
	Dequeue();
	Dequeue();
	Dequeue();
	Enqueue(30);
	printf("\n");
	if(isFull()) printf("Queue is full\n");
	else printf("Queue is NOT full\n");
	if(isEmpty()) printf("Queue is empty\n");
	else printf("Queue is NOT empty\n");
	
 
	return 0;
}

