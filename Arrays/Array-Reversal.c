#include <stdio.h>
#include <conio.h>

// Reverses the elements of a one-dimensional array.
void reverseArray(int array[5]) {
	int i, j;
	int reversedArray[5];

	// Store the elements in reverse order.
	for (i = 0, j = 4; i < 5; i++, j--) {
		reversedArray[i] = array[j];
	}

	// Copy the reversed elements back into the original array.
	for (i = 0; i < 5; i++) {
		array[i] = reversedArray[i];
	}
}

int main() {
	int numbers[5], originalArray[5];
	int i, j;

	// Read the array and keep a copy of the original values.
	for (i = 0; i < 5; i++) {
		scanf("%d", &numbers[i]);
		originalArray[i] = numbers[i];
	}

	// Reverse the array.
	reverseArray(numbers);

	// Display the original array.
	printf("Source:");
	for (i = 0; i < 5; i++) {
		if (i != 0)
			printf("-");

		printf(" %d ", originalArray[i]);
	}

	// Display the reversed array.
	printf("\nReversed:");
	for (i = 0; i < 5; i++) {
		if (i != 0)
			printf("-");

		printf(" %d ", numbers[i]);
	}

	return 0;
}