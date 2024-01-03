#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *agla;
};
int printlist(struct node *p){
	while(p!=NULL){
		printf("%d ",p->data );
		p=p->agla;
	}
}
int search(struct node *head,int k){
	struct node *curr= head;
	int index=0;
	while(curr!= NULL){
		printf("\n%d ",curr->data);
		if (curr->data == k) {
			return index;
		}
		curr=curr->agla;
		index++;
	}
	return -1;
}
struct node *insert(struct node *head, int i,int data){
	int pos,len;
	struct node *curr=head;
	struct node *temp= NULL;
	temp= malloc(sizeof(struct node));
	temp->data= data;
	//printf("\n%d",temp->data);
    pos=0;
    len=0;
    while (curr!=NULL){
    	len++;
	}
    while (curr!=NULL){
		/*printf("\n%d ",curr->data);
		printf("\npos=%d , i=%d",pos,i);*/
		if (i==0){
			temp->agla=head;
			return temp;
		}
		
		if (pos== i)
		{
			temp->agla=curr->agla;
			curr->agla=temp;
		}
		curr=curr->agla;
		pos++;
	}
	/*if(i>len) {
		return -1;
		}*/
	return head;
}
int main(){
	//INITIALISATION
	//struct node *head;
	struct node *head= NULL;
	struct node *n2= NULL;
	struct node *n3=NULL;
	//ALLOCATION
	head= malloc(sizeof(struct node));
	n2= malloc(sizeof(struct node));
	n3= malloc(sizeof(struct node));
	//Assign values
	head->data=10;
	n2->data=20;
	n3->data=30;
	//connecting nodes
	head->agla=n2;
	n2->agla=n3;
	n3->agla= NULL;
	
	//head=n1;
	printlist(head);
	//printf("\n%d",head);
	//printf("\n%d",head->data);
	//printf("\n%d",head->agla->data);
	/*int index= search(head,20);
	if(index== -1)
	printf("\nData not found!!");
	else 
	printf("\nData is present at index %d",index+1);
	//printf("%d",res);*/
	head=insert(head,2,5);
	printf("\n");
	printlist(head);
	head=insert(head,4,25);
	printf("\n");
	printlist(head);
	/*head=insert(head,,60);
	printf("\n");
	printlist(head);*/
}

	
	
