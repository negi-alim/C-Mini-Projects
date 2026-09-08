#include <stdio.h>
#include <conio.h>

int main() {
    char text[50], separator;
    int i, startIndex, j;

    printf("input:\nStr: ");
    scanf("%s", text);
    fflush(stdin);

    printf("a: ");
    scanf("%c", &separator);

    printf("out put:\n");

    startIndex = 0;

    // Search for the separator and print each part of the string.
    for (i = 0; text[i] != '\0'; i++) {

        if (text[i] == separator) {

            // Print the characters between the previous separator and this one.
            for (j = startIndex; j < i; j++)
                printf("%c", text[j]);

            printf("\n");

            // Start the next part after the separator.
            startIndex = i + 1;
        }
    }

    // Print the final part of the string.
    for (j = startIndex; j < i; j++)
        printf("%c", text[j]);

    return 0;
}

