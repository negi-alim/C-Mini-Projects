#include <stdio.h>
#include <conio.h>

// Structure for storing student information.
struct StudentInfo {
    char firstName[100];
    char lastName[100];
    char studentID[100];
    int score;
};

int main() {
    int numberOfStudents;
    int i;

    printf("This program stores and displays information for multiple students.\n");

    printf("Enter the number of students(integer): ");
    scanf("%d", &numberOfStudents);

    struct StudentInfo students[numberOfStudents];

    // Read information for all students.
    inputStudents(students, numberOfStudents);

    // Display the stored information.
    outputStudents(students, numberOfStudents);

    return 0;
}

void inputStudents(struct StudentInfo students[], int numberOfStudents) {
    int i;

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

void outputStudents(struct StudentInfo students[], int numberOfStudents) {
    int i;

    printf("\nStudent information:\n");

    for (i = 1; i <= numberOfStudents; i++) {
        printf("\nStudent #%d Detail:", i);
        printf("\nFirstname: %s", students[i].firstName);
        printf("\nLastname: %s", students[i].lastName);
        printf("\nID: %s", students[i].studentID);
        printf("\nScore: %d\n", students[i].score);
    }
}