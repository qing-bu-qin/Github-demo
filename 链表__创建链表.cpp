//Linked List: Inserting a node at beginning
#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

struct Node* head;

void Insert(int x);
void Print();

void main() {
	head = NULL;
	printf("How many numbers?\n");
	int n, i,x;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		printf("Enter the number \n");
		scanf_s("%d", &x);
		Insert(x);
		Print();
	}
}

void Insert(int x) {
	struct Node* temp = (Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = head;
	head = temp;
}

void Print() {
	struct Node* temp = head;
	printf("List is :");
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
