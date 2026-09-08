#include <stdio.h>
#include <conio.h>

// Prints the English alphabet in an increasing triangular pattern.
int main() {
	char inputCharacter;
	int characterCode;
	int i, row;

	scanf("%c", &inputCharacter);
	characterCode = inputCharacter;

	// Handle uppercase English letters.
	if (characterCode >= 65 && characterCode <= 90) {
		for (row = 1; characterCode <= 90; characterCode++, row++) {
			for (i = 1; i <= row; i++)
				printf("%c", characterCode);
			printf("\n");
		}
	}

	// Handle lowercase English letters.
	else if (characterCode >= 97 && characterCode <= 122) {
		for (row = 1; characterCode <= 122; characterCode++, row++) {
			for (i = 1; i <= row; i++)
				printf("%c", characterCode);
			printf("\n");
		}
	}

	// Display an error message for non-English alphabet characters.
	else
		printf("The entered value is not valid.");

	return 0;
}

