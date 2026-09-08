#include <stdio.h>
#include <conio.h>

int main() {
	int numbers[10], min, max;
	int i;

	// Read ten integers into the array.
	for (i = 0; i < 10; i++)
		scanf("%d", &numbers[i]);

	// Initialize the minimum and maximum with the first element.
	min = max = numbers[0];

	// Find the minimum and maximum values.
	for (i = 0; i < 10; i++) {
		if (max <= numbers[i])
			max = numbers[i];

		if (min >= numbers[i])
			min = numbers[i];
	}

	// Display the minimum and maximum values.
	printf("min: %d,", min);
	printf("max: %d", max);

	return 0;
}