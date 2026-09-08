
#include <stdio.h>
#include <conio.h>

int main() {
    char expression[500], uniqueCharacters[250];
    int values[250], expressionValues[500];
    int i, j, k, duplicateFound = 0, expressionLength;

    // Read the arithmetic expression.
    gets(expression);

    // Determine the length of the expression.
    for (i = 0; expression[i] != '\0'; i++) {
    }

    expressionLength = i;

    // Find all unique characters that are not arithmetic operators.
    for (i = 0, k = 0; expression[i] != '\0'; i++) {

        if (expression[i] != '+' && expression[i] != '-' &&
            expression[i] != '/' && expression[i] != '*') {

            duplicateFound = 0;

            for (j = 0; j < k; j++) {
                if (uniqueCharacters[j] == expression[i]) {
                    duplicateFound = 1;
                }
            }

            if (duplicateFound == 0) {
                uniqueCharacters[k] = expression[i];
                k++;
            }

            // Terminate the list of unique characters at the end.
            if (i == (expressionLength - 1)) {
                uniqueCharacters[k] = '\0';
            }
        }
    }

    // Read a numeric value for each unique character.
    for (i = 0; uniqueCharacters[i] != '\0'; i++) {
        printf("%c: ", uniqueCharacters[i]);
        scanf("%d", &values[i]);
    }

    // Replace each character in the expression with its corresponding value.
    for (i = 0; expression[i] != '\0'; i++) {
        for (j = 0; uniqueCharacters[j] != '\0'; j++) {
            if (uniqueCharacters[j] == expression[i]) {
                expressionValues[i] = values[j];
            }
        }
    }

    // Evaluate multiplication and division operations first.
    for (j = 0; expression[j] != '\0'; j++) {

        if (expression[j] == '*') {
            expressionValues[j - 1] =
                expressionValues[j - 1] * expressionValues[j + 1];

            // Remove the processed operator and its right operand.
            for (k = j; expression[k + 2] != '\0'; k++) {
                expression[k] = expression[k + 2];
                expressionValues[k] = expressionValues[k + 2];
            }

            expression[k] = '\0';
            j = 0;
        }

        if (expression[j] == '/') {
            expressionValues[j - 1] =
                expressionValues[j - 1] / expressionValues[j + 1];

            // Remove the processed operator and its right operand.
            for (k = j; expression[k + 2] != '\0'; k++) {
                expression[k] = expression[k + 2];
                expressionValues[k] = expressionValues[k + 2];
            }

            expression[k] = '\0';
            j = 0;
        }
    }

    // Evaluate addition and subtraction operations.
    for (j = 0; expression[j] != '\0'; j++) {

        if (expression[j] == '+') {
            expressionValues[j - 1] =
                expressionValues[j - 1] + expressionValues[j + 1];

            // Remove the processed operator and its right operand.
            for (k = j; expression[k + 2] != '\0'; k++) {
                expression[k] = expression[k + 2];
                expressionValues[k] = expressionValues[k + 2];
            }

            expression[k] = '\0';
            j = 0;
        }

        if (expression[j] == '-') {
            expressionValues[j - 1] =
                expressionValues[j - 1] - expressionValues[j + 1];

            // Remove the processed operator and its right operand.
            for (k = j; expression[k + 2] != '\0'; k++) {
                expression[k] = expression[k + 2];
                expressionValues[k] = expressionValues[k + 2];
            }

            expression[k] = '\0';
            j = 0;
        }
    }

    // Display the final result.
    printf("%d", expressionValues[0]);

    return 0;
}
