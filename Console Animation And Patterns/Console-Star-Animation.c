#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>

// Controls the animation width and star pattern size.
int screenWidth = 60, patternSize = 7;
int horizontalPosition, verticalPosition;

// First animation step: moves the star pattern horizontally.
void step_1() {
	for (horizontalPosition = 0; horizontalPosition < screenWidth; horizontalPosition++) {
		for (verticalPosition = 1; verticalPosition <= (patternSize / 2 + 1); verticalPosition++) {
			for (int i = 1; i <= horizontalPosition; i++)
				printf(" ");

			for (int j = 1; j <= verticalPosition; j++)
				printf("*");

			printf("\n");
		}

		for (verticalPosition = patternSize / 2; verticalPosition > 0; verticalPosition--) {
			for (int i = 1; i <= horizontalPosition; i++)
				printf(" ");

			for (int j = verticalPosition; j > 0; j--)
				printf("*");

			printf("\n");
		}

		system("cls");
		sleep(0.0001);
	}
}

// Second animation step: moves the star pattern vertically.
void step_2() {
	for (verticalPosition = 0; verticalPosition < screenWidth / 3; verticalPosition++) {
		for (int i = 0; i < verticalPosition; i++)
			printf("\n");

		for (int starCount = patternSize / 2 + 1; starCount > 0; starCount--) {
			for (horizontalPosition = screenWidth; horizontalPosition > 0; horizontalPosition--)
				printf(" ");

			for (int j = patternSize / 2 + 1 - starCount; j > 0; j--)
				printf(" ");

			for (int i = starCount; i > 0; i--)
				printf("*");

			for (int i = starCount - 1; i > 0; i--)
				printf("*");

			for (int j = patternSize / 2 - starCount - 1; j > 0; j--)
				printf(" ");

			printf("\n");
		}

		system("cls");
		sleep(0.0001);
	}
}

// Third animation step: moves the star pattern horizontally in the opposite direction.
void step_3() {
	for (horizontalPosition = screenWidth; horizontalPosition > 0; horizontalPosition--) {
		for (int i = 0; i < screenWidth / 3; i++)
			printf("\n");

		for (verticalPosition = patternSize / 2 + 1; verticalPosition > 0; verticalPosition--) {
			for (int i = 0; i < horizontalPosition; i++)
				printf(" ");

			for (int j = verticalPosition - 1; j > 0; j--)
				printf(" ");

			for (int k = patternSize / 2 + 1 - verticalPosition + 1; k > 0; k--)
				printf("*");

			printf("\n");
		}

		for (verticalPosition = patternSize / 2; verticalPosition > 0; verticalPosition--) {
			for (int i = 0; i < horizontalPosition; i++)
				printf(" ");

			for (int j = patternSize / 2 + 1 - verticalPosition; j > 0; j--)
				printf(" ");

			for (int k = verticalPosition; k > 0; k--)
				printf("*");

			printf("\n");
		}

		system("cls");
		sleep(0.0001);
	}
}

// Fourth animation step: moves the star pattern vertically in the opposite direction.
void step_4() {
	for (verticalPosition = screenWidth / 3; verticalPosition > 0; verticalPosition--) {
		for (int i = 0; i < verticalPosition; i++)
			printf("\n");

		for (int starCount = patternSize / 2 + 1; starCount > 0; starCount--) {
			for (int j = starCount - 1; j > 0; j--)
				printf(" ");

			for (int i = patternSize / 2 + 1 - starCount + 1; i > 0; i--)
				printf("*");

			for (int i = patternSize / 2 + 1 - starCount; i > 0; i--)
				printf("*");

			for (int j = starCount - 1; j > 0; j--)
				printf(" ");

			printf("\n");
		}

		system("cls");
		sleep(0.0001);
	}
}

int main() {
	step_1();
	step_2();
	step_3();
	step_4();
}

