
#include <stdio.h>
#include <conio.h>

/*
******
 *****
  ****
   ***
    **
     *
*/

// Prints a decreasing right-aligned star pattern.
int main() {
	int n;
	int starsPrinted = 0;
	int row = 0;
	int i = 0;
	int spacesPrinted = 0;

	scanf("%i", &n);

	while (row <= n) {
		while (starsPrinted + row < n) {
			while (spacesPrinted < row) {
				printf(" ");
				spacesPrinted++;
			}

			printf("*");
			starsPrinted++;
		}

		printf("\n");

		row++;
		starsPrinted = 0;
		spacesPrinted = 0;
	}

	return 0;
}

