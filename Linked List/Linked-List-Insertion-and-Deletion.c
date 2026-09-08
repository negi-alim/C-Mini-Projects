
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

// Creates a new linked-list node with the given integer value.
struct node *create(int dataValue) {
	struct node *newNode;

	newNode = (struct node *)malloc(sizeof(struct node));
	newNode->data = dataValue;
	newNode->link = NULL;

	return newNode;
}

// Displays all nodes of the linked list.
void show(struct node *first) {
	struct node *currentNode = 0;

	currentNode = (struct node *)malloc(sizeof(struct node));

	for (currentNode = first; currentNode != NULL; currentNode = currentNode->link)
		printf("|_%d_|-->", currentNode->data);
}

// Removes the node following a node whose data is 4.
struct node *remover(struct node *first) {
	struct node *currentNode, *nodeToRemove;

	nodeToRemove = (struct node *)malloc(sizeof(struct node));
	currentNode = (struct node *)malloc(sizeof(struct node));

	for (currentNode = first; currentNode != NULL; currentNode = currentNode->link) {
		if (currentNode->link->data == 4) {
			nodeToRemove = currentNode->link;
			currentNode->link = currentNode->link->link;
			free(nodeToRemove);
		}
	}
}

// Inserts a new node containing 8 before a node whose data is 4.
struct node *add(struct node *first) {
	struct node *currentNode, *newNode;

	newNode = (struct node *)malloc(sizeof(struct node));
	currentNode = (struct node *)malloc(sizeof(struct node));

	for (currentNode = first; currentNode != NULL; currentNode = currentNode->link) {
		if (currentNode->link->data == 4) {
			newNode->data = 8;
			newNode->link = currentNode->link;
			currentNode->link = newNode;
		}
	}
}

int main() {
	struct node *first = 0, *last, *newNode;
	int n;

	scanf("%d", &n);

	int numbers[n];

	// Read the elements that will be stored in the linked list.
	for (int i = 0; i < n; i++)
		scanf("%d", &numbers[i]);

	// Create the linked list from the input values.
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			first = create(numbers[i]);
			last = first;
		}
		else {
			newNode = create(numbers[i]);
			last->link = newNode;
			last = last->link;
		}
	}

	printf("result\n");
	show(first);

	printf("\n");

	// Insert 8 before a node containing 4.
	add(first);
	show(first);

	printf("\n");

	// Remove the node following a node containing 4.
	remover(first);
	show(first);
}

