#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next=NULL;
};
struct Node* insert(struct Node* head, int element){
    
    struct Node* p= (struct Node*)malloc(sizeof(struct Node));
    p->data=element;
    p->next=NULL; 
    if(head==NULL){ 
        head=p;
    }
    else{
        struct Node* q=head;
        while(q->next!=NULL){
            q=q->next;
        }
        q->next=p;
    return head;
}
}
void printlist(struct Node *p){
	printf("PRINT LIST");
	if(p==NULL){
		return ;
	}
	else{
	
	while(p!=NULL){
		printf("%d ",p->data );
		p=p->next;
	}
	}
}
int main(){
	struct Node *head=NULL;
	head=(struct Node *)malloc(sizeof(struct Node));
	
	
	printlist(head);
	
	return 0;
}
