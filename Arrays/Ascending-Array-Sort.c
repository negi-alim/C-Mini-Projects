#include <stdio.h>
#include <conio.h>

int main() {
	int i, j, min, max;
	int numbers[10];

	// Read ten integers into the array.
	printf("Enter ten integers into the array:\n");

	for (i = 0; i < 10; i++)
		scanf("%d", &numbers[i]);

	// Find the minimum and maximum values.
	min = max = numbers[0];

	for (i = 0; i < 10; i++) {
		if (max <= numbers[i])
			max = numbers[i];

		if (min >= numbers[i])
			min = numbers[i];
	}

	// Display the elements in ascending order.
	printf("Elements of the sorted array:");

	for (j = min; j <= max; j++) {
		for (i = 0; i < 10; i++) {
			if (j == numbers[i])
				printf(" %d", numbers[i]);
		}
	}

	return 0;
}