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

int main() {
	struct node *first = 0, *newNode, *last = 0;
	char input[10];

	printf("Enter a string of ten characters:\n");
	gets(input);

	printf("\nCreating the linked list...\n");

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

	printf("Initial linked list:\n");
	show(first);

	struct node *currentNode, *nodeToRemove;

	// Check whether the first node contains 'c'.
	if (first != NULL && first->data == 'c') {

		nodeToRemove = first;
		first = first->link;

		free(nodeToRemove);
	}
	else {
		// Find and remove the node following a node whose data is 'c'.
		for (currentNode = first; currentNode != NULL && currentNode->link != NULL; currentNode = currentNode->link) {
			if (currentNode->link->data == 'c') {
				nodeToRemove = currentNode->link;


				currentNode->link = nodeToRemove->link;

				free(nodeToRemove);
				break;
			}
		}
	}
	
	printf("\nAll nodes containing c have been deleted.\n");
	printf("\nResult:\n");
	show(first);
}