#include <stdio.h>
#include <conio.h>

int main() {
    char text[256];
    int characterCounts[256];
    char characters[256];
    int i, j, duplicateFound, k, maxCount, order;

    printf("Enter the text:\n");
    gets(text);

    // Convert uppercase English letters to lowercase.
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 65 && text[i] <= 90)
            text[i] = text[i] + 32;
    }

    // Find each unique character and count its occurrences.
    for (i = 0, j = 0; text[i] != '\0'; i++) {

        // Ignore spaces, periods, and commas.
        if (text[i] != ' ' && text[i] != '.' && text[i] != ',') {

            duplicateFound = 0;

            // Check whether this character has already been processed.
            for (k = 0; k < i; k++) {
                if (text[k] == text[i]) {
                    duplicateFound = 1;
                }
            }

            if (duplicateFound == 0) {
                characterCounts[j] = 1;
                characters[j] = text[i];

                // Count all later occurrences of the character.
                for (k = i + 1; text[k] != '\0'; k++) {
                    if (text[k] == text[i])
                        characterCounts[j]++;
                }

                j++;
            }
        }
    }

    // Find the highest character frequency.
    maxCount = characterCounts[0];

    for (order = 0; order < j; order++) {
        if (maxCount <= characterCounts[order])
            maxCount = characterCounts[order];
    }

    puts("All characters in order: (order - character - count)");

    // Display characters in descending order of frequency.
    for (order = 1, i = 0, k = maxCount; k != 0; i++) {

        // Restart from the first character after checking all characters.
        if (i == j) {
            i = 0;
            k--;
        }

        if (k == characterCounts[i]) {
            printf("%d %c %d\n",
                   order, characters[i], characterCounts[i]);
            order++;
        }
    }
}

