#include <stdio.h>
#include <conio.h>

int main() {
    int number, divisor;

    printf("This program finds all prime numbers between 1000 and 9999.\n");
    printf("The four-digit prime numbers are:\n");

    // Check every four-digit number.
    for (number = 1000; number <= 9999; number++) {

        // Test whether the current number is divisible by any number
        // between 2 and the number itself.
        for (divisor = 2; divisor < number; divisor++) {

            if (number % divisor == 0)
                break;

            // If no divisor has been found, the number is prime.
            else if (divisor == number - 1)
                printf("%d ", number);
        }
    }

    return 0;
}