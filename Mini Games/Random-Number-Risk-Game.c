
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <time.h>

int main() {
	int choice;
	int playerTotal = 0;
	int playerRandomNumber = 0;
	int computerRandomNumber = 0;
	int unusedVariable = 0;

	srand(time(0));

	while (1) {
		printf("press 1 to start the game.");
		scanf("%d", &choice);

		// Generate random numbers and add them to the player's total.
		while (choice == 1) {
			playerRandomNumber = rand() % 99 + 1;
			printf("\nyour new number:%d", playerRandomNumber);

			playerTotal += playerRandomNumber;
			printf("\nsumation of your random numbers untill now:%d\ndo you want to continue? yes=press:1 / no=press:0\n", playerTotal);

			// The player loses if the total exceeds 101.
			if (playerTotal > 101) {
				printf("you lost!");
				break;
			}

			scanf("%d", &choice);

			// Validate the player's choice.
			while (choice != 0 && choice != 1) {
				printf("invalid number.try again\n");
				scanf("%d", &choice);
			}
		}

		if (choice == 1) {
			break;
		}

		if (choice == 0) {
			printf("your final number:%d\n", playerTotal);

			// Generate the computer's random number.
			computerRandomNumber = rand() % 101 + 1;
			printf("computers random number:%d\n", computerRandomNumber);

			// Compare the player's total with the computer's number.
			if (computerRandomNumber > playerTotal) {
				printf("you lost!");
			}
			else if (computerRandomNumber == playerTotal)
				printf("it seems we dont have any winner!");
			else if (playerTotal > computerRandomNumber)
				printf("you won!");

			break;
		}
	}
}

