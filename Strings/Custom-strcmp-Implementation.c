#include <stdio.h>
#include <conio.h>

int main() {
    char firstString[50], secondString[50];
    int i, firstLength, secondLength, differenceFound = 0;

    printf("input:\n");

    printf("Str1: ");
    gets(firstString);

    printf("Str2: ");
    gets(secondString);

    printf("out put:\n");

    // Determine the length of the first string.
    for (firstLength = 0; firstString[firstLength] != '\0'; firstLength++) {
    }

    // Determine the length of the second string.
    for (secondLength = 0; secondString[secondLength] != '\0'; secondLength++) {
    }

    // Compare the characters of the two strings.
    for (i = 0; firstString[i] != '\0'; i++) {

        if (firstString[i] != secondString[i]) {

            if (firstString[i] > secondString[i])
                printf("1");
            else
                printf("-1");

            differenceFound = 1;
            break;
        }
    }

    // If no different character was found, compare the string lengths.
    if (differenceFound == 0) {

        if (firstLength == secondLength)
            printf("0");
        else if (firstLength > secondLength)
            printf("1");
        else if (firstLength < secondLength)
            printf("-1");
    }

    return 0;
}

