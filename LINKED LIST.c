#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node* insert(struct Node* head,int new_data){
	struct Node* p=(malloc(sizeof(struct Node)));
	p->data=new_data;
	p->next=NULL;
	if (head==NULL) {
		
		head=p;
	}
	else{
		
		struct Node* q=head;
		while(q->next!=NULL){
			q=q->next;
		}
	q->next=p;
	}
	return head;
	
}
void printlist(struct Node *p){
	
	while(p!=NULL){
		printf("%d ",p->data );
		p=p->next;
	}
	printf("\n");
}
int main(){
	struct Node *head=malloc(sizeof(struct Node));
	head=NULL;
	
	head=insert(head,10);
	head=insert(head,20);
	head=insert(head,30);
	head=insert(head,40);
	printlist(head);
	
	
	
}
