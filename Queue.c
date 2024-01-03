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
	q->first=-1;
	q->last=-1;
	q->size=size;
	q->arr=(int*)malloc(size*sizeof(int));
	//return q;
}
int isEmpty(){
	return (q->first==q->last);
}
int isFull(){
	return (q->last==q->size-1);
}

void Enqueue(int data){
	if(isFull())
	printf("Queue overflow\n");
	else{
		q->last++;
		q->arr[q->last]=data;
	}
	
}
int Dequeue(){
	if(isEmpty()){
	printf("Queue Underflow\n");
	return INT_MIN; }
	int deqElement= q->arr[q->first+1]; //first ke ek aage h pehla element
	q->first++;
	return deqElement;

}
void display(){
	if(isEmpty()) printf("Queue is Empty\n");
	int i;
	printf("Queue is \n");
	for(i=q->first+1;i<=q->last;i++)
	printf("%d ",q->arr[i]);
}
int main(){
	createQueue(5);
//	if(isFull()) printf("Queue is full\n");
//	else printf("Queue is NOT full\n");
//	if(isEmpty()) printf("Queue is empty\n");
//	else printf("Queue is NOT empty\n");
	
	Enqueue(10);
	Enqueue(20);
	Enqueue(30);
	Enqueue(40);
	Enqueue(50);
	display();
	
	Dequeue();
	Dequeue();
	Dequeue();
	Dequeue();
	Dequeue();
	Enqueue(30);
	//	if(isFull()) printf("Queue is full\n");
//	else printf("Queue is NOT full\n");
//	if(isEmpty()) printf("Queue is empty\n");
//	
	
 
	return 0;
}

