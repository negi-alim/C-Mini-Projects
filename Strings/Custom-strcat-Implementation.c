#include <stdio.h>
#include <conio.h>

int main() {
    char firstString[50], secondString[50];
    int firstLength, secondLength, i;

    printf("String1: ");
    gets(firstString);

    printf("String2: ");
    gets(secondString);

    // Find the length of the second string.
    for (firstLength = 0; secondString[firstLength] != '\0'; firstLength++) {
    }

    // Add a space after the second string.
    secondString[firstLength] = ' ';

    // Find the length of the first string.
    for (secondLength = 0; firstString[secondLength] != '\0'; secondLength++) {
    }

    // Append the first string to the second string manually.
    for (i = firstLength + 1; i <= firstLength + secondLength; i++) {
        secondString[i] = firstString[i - (firstLength + 1)];
    }

    printf("Result: ");
    puts(secondString);

    return 0;
}
