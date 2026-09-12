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
	struct node *currentNode;

	currentNode = first;

	for (; currentNode != NULL; currentNode = currentNode->link)
		printf("|_%d_|-->", currentNode->data);

	printf("NULL\n");
}

// Removes the node following a node whose data is 4.
struct node *remover(struct node *first) {
	struct node *currentNode, *nodeToRemove;

	for (currentNode = first; currentNode != NULL && currentNode->link != NULL; currentNode = currentNode->link) {
		if (currentNode->data == 4) {
			nodeToRemove = currentNode->link;
			currentNode->link = nodeToRemove->link;
			free(nodeToRemove);
			break;
		}
	}

	return first;
}


// Inserts a new node containing 8 before a node whose data is 4.
struct node *add(struct node *first) {
	struct node *currentNode, *newNode;

	for (currentNode = first; currentNode != NULL && currentNode->link != NULL; currentNode = currentNode->link) {
		if (currentNode->link->data == 4) {
			newNode = (struct node *)malloc(sizeof(struct node));

			newNode->data = 8;
			newNode->link = currentNode->link;
			currentNode->link = newNode;

			currentNode = newNode;
		}
	}

	return first;
}

int main() {
	struct node *first = 0, *last, *newNode;
	int n;

	printf("\How many nodes do you want your linked list to have?");
	scanf("%d", &n);

	int numbers[n];

	printf("\nEnter %d numbers:\n",n);
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

	printf("\nInitial linked list:\n");
	show(first);

	printf("\nAll nodes containing 8 before 4 have been added.\n");
	add(first);
	show(first);

	printf("\nAll nodes following 4 have been deleted.\n");
	remover(first);
	show(first);
}