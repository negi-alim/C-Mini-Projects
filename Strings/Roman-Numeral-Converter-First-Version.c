#include <stdio.h>
#include <conio.h>

void convertRomanNumeral(char romanNumeral[50]) {
    int i, values[50], result;

    // Convert each Roman numeral character to its integer value.
    for (i = 0; i < 50; i++) {
        if (romanNumeral[i] == 'M')
            values[i] = 1000;

        if (romanNumeral[i] == 'D')
            values[i] = 500;

        if (romanNumeral[i] == 'C')
            values[i] = 100;

        if (romanNumeral[i] == 'L')
            values[i] = 50;

        if (romanNumeral[i] == 'X')
            values[i] = 10;

        if (romanNumeral[i] == 'V')
            values[i] = 5;

        if (romanNumeral[i] == 'I')
            values[i] = 1;
    }

    // Start the result with the value of the first Roman numeral.
    result = values[0];

    // Process the remaining Roman numeral values.
    for (i = 0; romanNumeral[i + 1] != '\0'; i++) {

        if (values[i + 1] <= values[i])
            result += values[i + 1];
        else
            result += values[i + 1] - 2 * values[i];
    }

    // Store the result in the first character of the input array.
    romanNumeral[0] = result;
}

int main() {
    char romanNumeral[50];
    int result[50];

    printf("This program converts a Roman numeral into its integer value.\n");
    printf("Supported Roman numerals: I, V, X, L, C, D, M.\n\n");

    printf("Enter the Roman numeral:\n");
    gets(romanNumeral);

    convertRomanNumeral(romanNumeral);

    result[0] = romanNumeral[0];

    printf("\nInteger value: ");
    printf("%i", result[0]);
}