
#include <stdio.h>
#include <conio.h>

// Generates a random number and asks the user to guess it.
int main() {
	srand(time(0));

	int randomNumber;
	int guess, nextGuess;

	// Generate a random number between 1 and 10.
	while (randomNumber < 1 || randomNumber > 10) {
		randomNumber = rand();
	}

	printf("Please enter a number:\n");
	scanf("%d", &guess);

	// Continue asking for guesses until the correct number is entered.
	while (guess != randomNumber) {

		// Check whether the entered number is outside the expected range.
		if (guess > 10 || guess < 0) {
			printf("Please enter a number between 1 and 10.\n");
		}

		// Inform the user that the target number is higher.
		else if (guess < randomNumber) {
			printf(".Number is higher\n");
		}

		// Inform the user that the target number is lower.
		else if (guess > randomNumber) {
			printf(".Number is lower\n");
		}

		scanf("%d", &nextGuess);
		guess = nextGuess;
	}

	printf("Correct number.");

	return 0;
}

