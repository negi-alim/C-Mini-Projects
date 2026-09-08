#include <stdio.h>
#include <conio.h>

int main() {
    char text[256];
    int i, wordStart, k = -1, center, offset, z, f, textLength;

    printf("Enter the text:\n");
    gets(text);

    // Determine the length of the input text.
    for (z = 0; text[z] != '\0'; z++) {
    }

    textLength = z + 1;

    printf("Palindrome words:\n");

    // Process each word separated by spaces, periods, or commas.
    for (i = 0; i <= textLength; i++) {

        if (text[i] == ' ' || text[i] == '.' ||
            text[i] == ',' || text[i] == '\0') {

            wordStart = k + 1;
            k = i;

            // Start from the center of the current word and compare
            // characters symmetrically around the center.
            for (center = ((i - wordStart) / 2 + wordStart), f = 1;
                 (center + f) <= i;) {

                // Handle words with an odd number of characters.
                if (center == wordStart) {
                    for (z = wordStart; z < i; z++)
                        printf("%c", text[z]);

                    printf("\n");
                }

                // Stop if the characters on both sides of the center differ.
                if (text[center - f] != text[center + f])
                    break;

                // If the outermost characters match, print the palindrome.
                if ((center - f) == wordStart) {
                    for (z = wordStart; z < i; z++)
                        printf("%c", text[z]);

                    printf("\n");
                }

                // Continue comparing characters farther from the center.
                if (text[center - f] == text[center + f]) {
                    f++;
                }
            }
        }
    }
}
