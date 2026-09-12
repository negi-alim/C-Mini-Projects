#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int unusedVariable, balance = 0, totalTrials, headsCount, tailsCount;

    // Total number of simulated coin tosses.
    totalTrials = 60 * 60;

    printf("Starting the simulation...\n");
    printf("Total number of trials: %d\n\n", totalTrials);

    // Test different numbers of heads from 0 to the total number of trials.
    for (int j = 0; j <= 10; j++, balance = 0) {

        // Calculate the number of heads and tails for the current iteration.
        headsCount = j * totalTrials / 10;
        tailsCount = totalTrials - headsCount;

        printf("Testing case %d of 10...\n", j);
        printf("Heads: %d | Tails: %d\n", headsCount, tailsCount);

        // Increase the balance once for each head.
        for (int l = 0; l < headsCount; l++) {
            balance++;
        }

        // Decrease the balance once for each tail.
        for (int l = 0; l < tailsCount; l++) {
            balance--;
        }

        // Display the resulting difference between heads and tails.
        printf("Difference between heads and tails: %d\n\n", balance);
    }

    printf("Simulation completed.\n");
}