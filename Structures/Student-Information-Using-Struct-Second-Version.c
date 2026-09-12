#include <stdio.h>
#include <conio.h>
#include <string.h>

// Structure for storing student information.
struct StudentInfo {
    char firstName[100];
    char lastName[100];
    char studentID[100];
    int score;
};

void outputStudents(struct StudentInfo students[], int numberOfStudents) {
    int i;
    struct StudentInfo comparisonStudents[numberOfStudents];

    // Initialize the first and last comparison names.
    strcpy(comparisonStudents[0].firstName, students[0].firstName); // Maximum
    strcpy(comparisonStudents[numberOfStudents - 1].firstName,
           students[numberOfStudents - 1].firstName); // Minimum

    // Compare student names to determine the maximum and minimum values.
    for (i = 0; i <= numberOfStudents; i++) {

        if (strcmp(comparisonStudents[0].firstName, students[i].firstName) == 1) {
            strcpy(comparisonStudents[0].firstName, students[i].firstName);
        }

        if (strcmp(comparisonStudents[numberOfStudents - 1].firstName,
                   students[i].firstName) == -1) {
            strcpy(comparisonStudents[numberOfStudents - 1].firstName,
                   students[i].firstName);
        }
    }
}

void inputStudents(struct StudentInfo students[], int numberOfStudents) {
    int i;

    // Read information for all students.
    for (i = 1; i <= numberOfStudents; i++) {
        printf("\nEnter the details of student(integer) #%d:\n", i);

        printf("First Name(text): ");
        scanf("%s", &students[i].firstName);

        printf("Last Name(text): ");
        scanf("%s", &students[i].lastName);

        printf("ID(text): ");
        scanf("%s", &students[i].studentID);

        printf("Score(integer): ");
        scanf("%d", &students[i].score);
    }
}

int main() {
    int numberOfStudents;
    int i;

    printf("This program stores and processes information for multiple students.\n");

    printf("Enter the number of students(integer): ");
    scanf("%d", &numberOfStudents);

    struct StudentInfo students[numberOfStudents];

    // Read the student information.
    inputStudents(students, numberOfStudents);

    // Process the student information.
    outputStudents(students, numberOfStudents);

    return 0;
}