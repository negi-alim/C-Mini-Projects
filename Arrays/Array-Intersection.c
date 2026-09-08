#include <stdio.h>
#include <conio.h>

// Finds and prints the elements that are common between two arrays.
void findCommonElements(int firstArray[3], int secondArray[3]) {
	int i, j;

	printf("Common indexes:");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (secondArray[j] == firstArray[i]) {
				printf(" %d -", firstArray[i]);
			}
		}
	}

	printf("\b \b");
}

int main() {
	int firstArray[3];
	int i, secondArray[3];

	// Read the first array.
	printf("First array:\n");
	for (i = 0; i < 3; i++)
		scanf("%i", &firstArray[i]);

	// Read the second array.
	printf("Second array:\n");
	for (i = 0; i < 3; i++)
		scanf("%d", &secondArray[i]);

	// Find and print the common elements.
	findCommonElements(firstArray, secondArray);

	return 0;
}