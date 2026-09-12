#include <stdio.h>
#include <conio.h>
#include <time.h>

// Search for occurrences of a word in a string.
void finder(char text[100], char targetWord[100]) {
    int textLength, targetLength;
    int i, wordStart, matchIndex, printIndex;

    // Determine the length of the input text.
    for (i = 0; text[i] != '\0'; i++) {
    }

    textLength = i;

    // Determine the length of the target word.
    for (i = 0; targetWord[i] != '\0'; i++) {
    }

    targetLength = i;

    // Search for the target word at the beginning of each word.
    for (i = 0; text[i] != '\0'; i++) {

        if (text[i] == ' ' || i == 0) {

            if (text[i] == ' ')
                wordStart = i + 1;
            else
                wordStart = i;

            for (matchIndex = 0;
                 text[wordStart] != ' ' && wordStart != textLength;
                 wordStart++) {

                if (targetWord[matchIndex] == text[wordStart]) {
                    matchIndex++;
                }

                if (matchIndex == targetLength) {

                    // Print the word containing the target sequence.
                    for (printIndex = i + 1;
                         text[printIndex] != ' ' && printIndex != textLength;
                         printIndex++)
                        printf("%c", text[printIndex]);

                    printf("\n");
                    break;
                }
            }
        }
    }
}

int main() {
    char text[100], targetWord[100];

    printf("This program finds words that contain a specified character sequence.\n");
    printf("Enter a text and a target sequence to find all matching words.\n\n");

    printf("Enter the text:\n");
    gets(text);

    printf("Enter the character sequence to search for:\n");
    gets(targetWord);

    printf("\nWords containing the target sequence:\n");

    // Search for the target word.
    finder(text, targetWord);

    return 0;
}