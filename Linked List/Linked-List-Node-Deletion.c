#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
	char data;
	struct node *link;
};

// Creates a new linked-list node with the given character.
struct node *create(char data) {
	struct node *newNode = 0;

	newNode = (struct node *)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->link = NULL;

	return newNode;
}

// Displays all nodes of the linked list.
void show(struct node *first) {
	struct node *currentNode;

	currentNode = first;

	for (; currentNode != NULL; currentNode = currentNode->link)
		printf("|__%c__|--> ", currentNode->data);

	printf("NULL\n");
}

// Finds and removes the node following a node containing 'c'.
struct node *find(struct node *first) {
	struct node *currentNode, *nodeToRemove;

	for (currentNode = first; currentNode != NULL && currentNode->link != NULL; currentNode = currentNode->link) {
		if (currentNode->data == 'c') {
			nodeToRemove = currentNode->link;

			currentNode->link = nodeToRemove->link;
			free(nodeToRemove);
		}
	}

	return first;
}

int main() {
	struct node *first = 0, *newNode, *last = 0;
	char input[10];

	printf("Enter a string of ten characters:\n");
	gets(input);

	// Create a linked list from the characters entered by the user.
	for (int i = 0; input[i] != '\0'; i++) {
		if (!first) {
			first = create(input[i]);
			last = first;
		}
		else {
			newNode = create(input[i]);
			last->link = newNode;
			last = last->link;
		}
	}

	printf("\nInitial linked list:\n");
	show(first);

	printf("\nNodes following 'c' have been deleted.\n");
	find(first);

	printf("\nResult:\n");
	show(first);
}