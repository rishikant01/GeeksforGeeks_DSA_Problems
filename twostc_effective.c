#include<stdio.h>
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
	stck->top1=-1;
	stck->top2=size;
	stck->arr=(int *)malloc(size*sizeof(int));
	return stck;
}
struct twostacks* push1(struct twostacks* stck,int data){
	if(stck->top1<stck->top2-1){
		stck->top1++;
		stck->arr[stck->top1]=data;
	}
	else{
		printf("Stack Overflow\n");
		
	}
	return stck;
}
struct twostacks* push2(struct twostacks* stck,int data){
	if(stck->top1<stck->top2-1){
		stck->top2--;
		stck->arr[stck->top2]=data;
	}
	else{
		printf("Stack Overflow\n");
		
	}
	return stck;
}
int pop1(struct twostacks* stck){
	if(stck->top1==-1){
		printf("Stack Underflow\n");
		return 0;
	}
	else{
		int popped=stck->arr[stck->top1];
		stck->top1--;
		return popped;
	}
}
int pop2(struct twostacks* stck){
	if(stck->top2==stck->size){
		printf("Stack Underflow\n");
		return 0;
	}
	else{
		int popped=stck->arr[stck->top2];
		stck->top2++;
		return popped;
	}
}
void display1(struct twostacks* stck){
	int i ;
	for(i=0;i<=stck->top1;i++)
	printf("%d ",stck->arr[i]);
}
void display2(struct twostacks* stck){
	int i ;
	for(i=stck->size-1;i>=stck->top2;i--)
	printf("%d ",stck->arr[i]);
}
void displayarr(struct twostacks* stck){
	int i ;
	for(i=0;i<stck->size;i++)
	printf("%d ",stck->arr[i]);
}
int main(){
	struct twostacks* stck=createstack(5);
	push1(stck,10);
	push1(stck,20);
	push1(stck,30);
	push2(stck,1);
	push2(stck,2);
	//display1(stck);
	printf("\n");
	display2(stck);
	printf("\n");
	pop1(stck);
	//display1(stck);
//	pop2(stck);
//	pop2(stck);
//	pop2(stck);
	printf("\n");
	display2(stck);
	//displayarr(stck);
	
}
