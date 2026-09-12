#include <stdio.h>
#include <conio.h>

int main() {
    char text[100], substring[50];
    int substringLength = 0, firstOccurrence, occurrenceCount = 0, found = 0;

    printf("This program finds how many times a substring occurs in a text\n");
    printf("and displays the starting index of its first occurrence.\n\n");

    printf("Enter the text:\n");
    gets(text);

    printf("Enter the substring to search for:\n");
    gets(substring);

    // Determine the length of the substring.
    for (int i = 0; substring[i] != '\0'; i++) {
        substringLength++;
    }

    // Count how many times the substring occurs in the text.
    for (int i = 0; text[i] != '\0'; i++) {

        if (text[i] == substring[0]) {

            for (int textIndex = i, substringIndex = 0;
                 textIndex < (i + substringLength);
                 textIndex++, substringIndex++) {

                if (text[textIndex] != substring[substringIndex]) {
                    break;
                }

                if (textIndex == (i + substringLength - 1)) {
                    occurrenceCount++;
                }
            }
        }
    }

    printf("\nNumber of occurrences: ");
    printf("%d\n", occurrenceCount);

    // Find the starting index of the first occurrence.
    for (int i = 0; text[i] != '\0'; i++) {

        if (text[i] == substring[0]) {

            for (int textIndex = i, substringIndex = 0;
                 textIndex < (i + substringLength);
                 textIndex++, substringIndex++) {

                if (text[textIndex] != substring[substringIndex]) {
                    break;
                }

                if (textIndex == i + substringLength - 1) {
                    firstOccurrence = i;
                    found = 1;
                }
            }
        }

        if (found == 1) {
            break;
        }
    }

    printf("Starting index of the first occurrence: ");
    printf("%d", firstOccurrence);

    return 0;
}