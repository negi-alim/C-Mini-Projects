#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Defines a node for storing one character in the linked list.
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
}

// Displays the linked list.
void show(struct node *first) {
	struct node *currentNode;

	currentNode = first;

	for (; currentNode != NULL; currentNode = currentNode->link) {
		printf("|__%c__|", currentNode->data);

		if (currentNode->link != NULL)
			printf("-->");
	}
}

int main() {
	struct node *first = 0, *newNode, *last = 0;
	char input[10];

	printf("Enter a string of ten characters:\n");
	gets(input);


	// Add each character to the beginning of the linked list.
	for (int i = 0; input[i] != '\0'; i++) {
		if (!first) {
			first = create(input[i]);
			last = first;
		}
		else {
			newNode = create(input[i]);
			newNode->link = last;
			last = newNode;
		}
	}


	printf("\nThe reversed string:\n");
	show(last);
}