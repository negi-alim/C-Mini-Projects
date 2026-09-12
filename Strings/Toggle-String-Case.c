#include <stdio.h>
#include <conio.h>

void toggleCase(char text[50]) {
    int i;
    char originalText[50];

    // Create a copy of the original text.
    for (i = 0; i < 50; i++) {
        originalText[i] = text[i];
    }

    // Convert uppercase letters to lowercase and lowercase letters to uppercase.
    for (i = 0; i < 50; i++) {

        if (originalText[i] >= 65 && originalText[i] <= 90)
            text[i] = text[i] + 32;

        if (originalText[i] >= 97 && originalText[i] <= 122)
            text[i] = text[i] - 32;
    }
}

int main() {
    char text[50];

    printf("This program converts uppercase letters to lowercase and lowercase letters to uppercase.\n");
    printf("Enter the text:\n");
    gets(text);

    toggleCase(text);

    printf("Changed Text:\n");
    puts(text);

    return 0;
}
