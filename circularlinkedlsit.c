#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

int printlist(struct node *head){
	struct node *curr= head->next;
	if (head==NULL) 
	return;
	printf("%d ",head->data);
	while(curr!=head){
		printf("%d ",curr->data );
		curr=curr->next;
	}
}
int main(){
	struct node *head=NULL;
	struct node *n2=NULL;
	struct node *n3=NULL;
	struct node *n4=NULL;
	struct node *n5=NULL;
	struct node *n6=NULL;
	
	head=malloc(sizeof(struct node));
	n2=malloc(sizeof(struct node));
	n3=malloc(sizeof(struct node));
	n4=malloc(sizeof(struct node));
	n5=malloc(sizeof(struct node));
	n6=malloc(sizeof(struct node));
	
	head->data= 10;
	n2->data=20;
	n3->data=30;
	n4->data=40;
	n5->data=50;
	n6->data=60;
	
	head->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=n6;
	n6->next=head;
	
	printlist(head);

}
