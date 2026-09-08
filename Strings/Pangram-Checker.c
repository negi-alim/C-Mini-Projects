#include <stdio.h>
#include <conio.h>

void checkPangram(char text[500]) {
    int i, uniqueCount, j, characterFound = 0;
    int characterSum = 0;
    char uniqueCharacters[500];

    // Convert uppercase English letters to lowercase.
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 65 && text[i] <= 90) {
            text[i] += 32;
        }
    }

    // Find and store each unique English letter in the text.
    for (i = 0, uniqueCount = 0; text[i] != '\0'; i++, characterFound = 0) {

        if (text[i] >= 97 && text[i] <= 122) {

            // Check whether the current letter has already been stored.
            for (j = 0; j < uniqueCount; j++) {
                if (uniqueCharacters[j] == text[i]) {
                    characterFound = 1;
                    break;
                }
            }

            // Store the letter if it has not appeared before.
            if (characterFound == 0) {
                uniqueCharacters[uniqueCount] = text[i];
                uniqueCount++;
            }
        }
    }

    // Calculate the sum of the stored characters.
    for (j = 0; j <= uniqueCount; j++) {
        characterSum += uniqueCharacters[j];
    }

    // Compare the sum with the expected sum of the lowercase alphabet.
    if (characterSum == 2847) {
        printf("true");
    }
    else {
        printf("false");
    }
}

int main() {
    char text[500];

    printf("Enter the text: \n");
    gets(text);

    checkPangram(text);

    return 0;
}

