#include <stdio.h>
#include <stdlib.h>


struct Node {
	int data;
	struct Node* next;
};


struct LinkedList {
	struct Node* head;
};


void printList(struct LinkedList* list) {
	struct Node* temp = list->head;
	while (temp) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
}


void addToList(struct LinkedList* list, int newData) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = newData;
	newNode->next = NULL;
	if (list->head == NULL) {
		list->head = newNode;
		return;
	}

	struct Node* last = list->head;
	while (last->next) {
		last = last->next;
	}

	last->next = newNode;
}

struct Node* mergeLists(struct Node* headA, struct Node* headB) {
	struct Node dummyNode;
	struct Node* tail = &dummyNode;
	dummyNode.next = NULL;

	while (1) {
		
		if (headA == NULL) {
			tail->next = headB;
			break;
		}
		if (headB == NULL) {
			tail->next = headA;
			break;
		}

		
		if (headA->data <= headB->data) {
			tail->next = headA;
			headA = headA->next;
		} else {
			tail->next = headB;
			headB = headB->next;
		}

		
		tail = tail->next;
	}

	
	return dummyNode.next;
}

int main() {
	
	struct LinkedList listA;
	struct LinkedList listB;
	listA.head = NULL;
	listB.head = NULL;

	
	addToList(&listA, 5);
	addToList(&listA, 10);
	addToList(&listA, 15);

	addToList(&listB, 2);
	addToList(&listB, 3);
	addToList(&listB, 20);

	
	listA.head = mergeLists(listA.head, listB.head);

	printf("Merged Linked List is: ");
	printList(&listA);

	return 0;
}

