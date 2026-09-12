#include <stdio.h>
#include <conio.h>

int main() {
	int numbers[10];
	int i, searchValue, found = 0;

	// Read ten integers into the array.
	printf("enter ten integers into the array:\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &numbers[i]);

	// Read the value to search for.
	printf("enter the integer to search for:\n");
	scanf("%d", &searchValue);

	// Search for the target value and print all matching indexes.
	printf("the values can be find in index(s):\n");
	for (i = 0; i < 10; i++) {
		if (searchValue == numbers[i]) {
			printf("%d ", i);
			found = 1;
		}
		else
			continue;
	}

	// Print a message if the value was not found.
	if (found == 0)
		printf("not found");

	return 0;
}