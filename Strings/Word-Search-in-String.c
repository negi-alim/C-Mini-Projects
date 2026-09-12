#include <stdio.h>
#include <conio.h>

int main() {
    char text[50], targetWord[40];
    int i, j, found = 0, textIndex, targetLength;

    printf("This program searches for a word within a text and says whether is exists or not.\n");
    printf("Enter a text and a word to check whether the word exists in the text.\n\n");

    printf("Enter the text:\n");
    gets(text);

    printf("Enter the word to search for:\n");
    gets(targetWord);

    // Determine the length of the target word.
    for (i = 0; targetWord[i] != '\0'; i++) {
    }

    targetLength = i;

    // Search for the target word inside the input text.
    for (i = 0; text[i] != '\0'; i++) {

        if (targetWord[0] == text[i]) {

            // Compare the target word with the corresponding
            // characters in the text.
            for (j = 0, textIndex = i;
                 textIndex < i + targetLength;
                 textIndex++, j++) {

                if (targetWord[j] != text[textIndex]) {
                    break;
                }

                if (textIndex == i + targetLength - 1) {
                    found = 1;
                }
            }
        }
    }

    if (found == 0) {
        printf("The word doesn't exist.");
    }
    if (found == 1) {
        printf("The word exists.");
    }

    return 0;
}