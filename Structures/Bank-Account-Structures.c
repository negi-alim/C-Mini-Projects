#include <stdio.h>
#include <conio.h>

// Structure for storing the information of the first bank account.
struct FirstAccount {
    int id;
    int cvv2;
    int expirationMonth;
    int expirationYear;
    int credit;
};

// Structure for storing the information of the second bank account.
struct SecondAccount {
    int id;
    int cvv2;
    int expirationMonth;
    int expirationYear;
    int credit;
};

int main() {
    struct FirstAccount firstAccount;
    struct SecondAccount secondAccount;

    printf("This program stores the information of two bank cards\n");
    printf("and adds the credit of the first card to the second card.\n\n");

    printf("Please enter your card information.(all must be integer)\n\n");

    // Read the information of the first account.
    printf("First card:\n");
    printf("ID: ");
    scanf("%d", &firstAccount.id);
    printf("CVV2: ");
    scanf("%d", &firstAccount.cvv2);
    printf("Expiration month: ");
    scanf("%d", &firstAccount.expirationMonth);
    printf("Expiration year: ");
    scanf("%d", &firstAccount.expirationYear);
    printf("Credit: ");
    scanf("%d", &firstAccount.credit);

    // Read the information of the second account.
    printf("\nSecond card:\n");
    printf("ID: ");
    scanf("%d", &secondAccount.id);
    printf("CVV2: ");
    scanf("%d", &secondAccount.cvv2);
    printf("Expiration month: ");
    scanf("%d", &secondAccount.expirationMonth);
    printf("Expiration year: ");
    scanf("%d", &secondAccount.expirationYear);
    printf("Credit: ");
    scanf("%d", &secondAccount.credit);

    // Add the first account's credit to the second account's credit.
    secondAccount.credit = secondAccount.credit + firstAccount.credit;

    printf("\nSecond card's credit after the transfer: %d", secondAccount.credit);

    return 0;
}