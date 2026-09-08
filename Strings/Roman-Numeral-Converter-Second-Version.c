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

    // Initialize the result with the value of the first numeral.
    result = values[0];

    // Process the remaining numerals.
    for (i = 0; romanNumeral[i + 1] != '\0'; i++) {

        // Add the next value when it is less than or equal to the current value.
        if (values[i] >= values[i + 1]) {
            result += values[i + 1];
        }

        // Apply subtraction when the next value is greater.
        else if (values[i] < values[i + 1]) {
            result += (values[i + 1] - 2 * values[i]);
        }
    }

    printf("Integer:\n%d", result);
}

int main() {
    char romanNumeral[50];

    printf("Enter the Roman number:\n");
    gets(romanNumeral);

    convertRomanNumeral(romanNumeral);
}

