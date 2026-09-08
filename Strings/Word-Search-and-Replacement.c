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

// Search for the target word and replace the matched portion with underscores.
void replacer(char text[100], char targetWord[100]) {
    int textLength, targetLength;
    int i, wordStart, matchIndex, printIndex, firstMatch, matchCompleted = 0;

    // Determine the length of the input text.
    for (i = 0; text[i] != '\0'; i++) {
    }

    textLength = i;

    // Determine the length of the target word.
    for (i = 0; targetWord[i] != '\0'; i++) {
    }

    targetLength = i;

    // Search for the target word within each word of the text.
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

                    if (matchIndex == 0) {
                        firstMatch = wordStart;
                    }

                    matchIndex++;

                    if (matchIndex == targetLength) {
                        matchCompleted = 1;
                    }
                }

                // Replace unmatched characters after the first match with underscores.
                if (firstMatch < wordStart &&
                    targetWord[matchIndex] != text[wordStart] &&
                    matchCompleted == 0) {
                    text[wordStart] = '_';
                }

                if (matchIndex == targetLength) {

                    // Print the processed word while skipping underscores.
                    for (printIndex = i;
                         text[printIndex] != ' ' && printIndex != textLength;
                         printIndex++) {

                        if (text[printIndex] != '_') {
                            printf("%c", text[printIndex]);
                        }
                    }

                    printf("\n");
                    break;
                }
            }
        }
    }
}

int main() {
    char text[100], targetWord[100], textCopy[100], targetWordCopy[100];

    gets(text);
    gets(targetWord);

    // Create a copy of the input text.
    for (int i = 0; text[i] != '\0'; i++) {
        textCopy[i] = text[i];
    }

    // Create a copy of the target word.
    for (int i = 0; targetWord[i] != '\0'; i++) {
        targetWordCopy[i] = targetWord[i];
    }

    // Search for the target word.
    finder(text, targetWord);

    // Process the copied text for replacement.
    replacer(textCopy, targetWordCopy);

    return 0;
}
