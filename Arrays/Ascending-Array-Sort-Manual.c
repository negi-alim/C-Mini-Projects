#include <stdio.h>
#include <conio.h>

int main() {
    int numbers[10], sortedNumbers[10];
    int i;

    int index0, index1, index2, index3;
    int index4, index5, index6, index7;

    // Read 10 integers into the original array.
    printf("Enter ten integers into the array:\n");

    for (i = 0; i < 10; i++)
        scanf("%d", &numbers[i]);

    // Initialize the last element of the sorted array with
    // the first element of the original array.
    sortedNumbers[9] = numbers[0];

    // Find the maximum value and store it in sortedNumbers[9].
    for (i = 0; i < 10; i++) {
        if (sortedNumbers[9] <= numbers[i]) {
            sortedNumbers[9] = numbers[i];
        }
    }

    // Initialize the remaining positions with the maximum value
    // so they can be used for comparison in later steps.
    for (i = 0; i < 9; i++) {
        sortedNumbers[i] = sortedNumbers[9];
    }

    // Find the smallest element and store its original index.
    for (i = 0; i < 10; i++) {
        if (sortedNumbers[0] >= numbers[i]) {
            sortedNumbers[0] = numbers[i];
            index0 = i;
        }
    }

    // Find the next smallest element while excluding the index
    // already used for sortedNumbers[0].
    for (i = 0; i < 10; i++) {
        if (sortedNumbers[1] >= numbers[i] && index0 != i) {
            sortedNumbers[1] = numbers[i];
            index1 = i;
        }
    }

    // Find the next smallest element while excluding previously
    // selected indexes.
    for (i = 0; i < 10; i++) {
        if (sortedNumbers[2] >= numbers[i] &&
            index0 != i && index1 != i) {
            sortedNumbers[2] = numbers[i];
            index2 = i;
        }
    }

    for (i = 0; i < 10; i++) {
        if (sortedNumbers[3] >= numbers[i] &&
            index0 != i && index1 != i &&
            index2 != i) {
            sortedNumbers[3] = numbers[i];
            index3 = i;
        }
    }

    for (i = 0; i < 10; i++) {
        if (sortedNumbers[4] >= numbers[i] &&
            index0 != i && index1 != i &&
            index2 != i && index3 != i) {
            sortedNumbers[4] = numbers[i];
            index4 = i;
        }
    }

    for (i = 0; i < 10; i++) {
        if (sortedNumbers[5] >= numbers[i] &&
            index0 != i && index1 != i &&
            index2 != i && index3 != i &&
            index4 != i) {
            sortedNumbers[5] = numbers[i];
            index5 = i;
        }
    }

    for (i = 0; i < 10; i++) {
        if (sortedNumbers[6] >= numbers[i] &&
            index0 != i && index1 != i &&
            index2 != i && index3 != i &&
            index4 != i && index5 != i) {
            sortedNumbers[6] = numbers[i];
            index6 = i;
        }
    }

    for (i = 0; i < 10; i++) {
        if (sortedNumbers[7] >= numbers[i] &&
            index0 != i && index1 != i &&
            index2 != i && index3 != i &&
            index4 != i && index5 != i &&
            index6 != i) {
            sortedNumbers[7] = numbers[i];
            index7 = i;
        }
    }

    for (i = 0; i < 10; i++) {
        if (sortedNumbers[8] >= numbers[i] &&
            index0 != i && index1 != i &&
            index2 != i && index3 != i &&
            index4 != i && index5 != i &&
            index6 != i && index7 != i) {
            sortedNumbers[8] = numbers[i];
        }
    }

    // Display the sorted array.
    printf("The sorted array:\n");

    for (i = 0; i < 10; i++)
        printf("%d ", sortedNumbers[i]);

    return 0;
}