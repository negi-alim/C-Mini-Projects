
#include <stdio.h>
#include <conio.h>

/*
           ****
          ****
         ****
        ****
       ****
      ****
     ****
    ****
*/

// Prints a right-aligned rectangular star pattern.
int main() {
	int n;
	int starsPrinted = 0;
	int row;
	int i;
	int k = 0;
	int spacesPrinted = 0;

	scanf("%i", &n);

	row = n - 1;

	while (k < n) {
		while (starsPrinted < n / 2) {
			while (spacesPrinted < row) {
				printf(" ");
				spacesPrinted++;
			}

			printf("*");
			starsPrinted++;
		}

		printf("\n");

		row--;
		starsPrinted = 0;
		spacesPrinted = 0;
		k++;
	}

	return 0;
}

