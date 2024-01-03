poi[u pyotiuyfx]#include<stdio.h>
#include<stdlib.h>

struct twostacks{
	int size;
	int* arr;
	int top1;
	int top2;
};
 struct twostacks* createstack(int size){
 	struct twostacks* stck=(struct twostacks*)malloc(sizeof(struct twostacks));
 	stck->size=size;
 	stck->top1=(size/2)+1;
 	stck->top2=size/2;
 	stck->arr=(int*)malloc(stck->size*sizeof(int));
	return stck;
 }
 struct twostacks* push1(struct twostacks* stck,int data){
 	if(stck->top1==0) {
 		printf("Overflow for stack 1\n");
	 }
	else{
		stck->top1--;
		stck->arr[stck->top1]=data;
	}
	return stck;
 }
 struct twostacks* push2(struct twostacks* stck,int data){
 	if(stck->top2==stck->size-1) {
 		printf("Overflow for stack 2\n");
	 }
	else{
		stck->top2++;
		stck->arr[stck->top2]=data;
	}
	return stck;
 }
 void displaystack1(struct twostacks* stck){
 	int i;
 	for(i=stck->top1;i< stck->size/2+1;i++)
 	printf("%d ",stck->arr[i]);
 }
 void displaystack2(struct twostacks* stck){
 	int i;
 	for(i=stck->top2;i> stck->size/2;i--)
 	printf("%d ",stck->arr[i]);
 }
 int pop1(struct twostacks* stck){
 	if (stck->top1==stck->size/2+1){
 		printf("Underflow in stack 1\n");
 		return 0;
	 }
	 else{
	 	int poppedelement=stck->arr[stck->top1];
	 	stck->top1++;
	 	return poppedelement;
	 }
 }
 int pop2(struct twostacks* stck){
 	if (stck->top2==stck->size/2){
 		printf("Underflow in stack 2\n");
 		return 0;
	 }
	 else{
	 	int poppedelement=stck->arr[stck->top2];
	 	stck->top2--;
	 	return poppedelement;
	 }
 }
 int main(){
 	struct twostacks* stck=createstack(10);
 	push1(stck,10);
 	push1(stck,20);
    push1(stck,30);
    push1(stck,40);
 	push1(stck,50);
 	
 	push2(stck,1);
 	push2(stck,2);
 	push2(stck,3);
 	push2(stck,4);
 	
 	
 	displaystack1(stck);
 	printf("\n");
 	pop1(stck);
 	displaystack1(stck);
 	printf("\n");
 	displaystack2(stck);
 	pop2(stck);
 	printf("\n");
 	displaystack2(stck);
 }
