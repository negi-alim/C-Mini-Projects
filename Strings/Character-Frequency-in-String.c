#include <stdio.h>
#include <conio.h>

int main() {
    char text[50], targetCharacter;
    int i, occurrenceCount;

    printf("enter a string: ");
    gets(text);

    printf("enter a character: ");
    scanf("%c", &targetCharacter);

    occurrenceCount = 0;

    // Count how many times the target character appears in the string.
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] == targetCharacter)
            occurrenceCount++;
    }

    printf("this character has been repeated %d times in the string.",
           occurrenceCount);

    return 0;
}
