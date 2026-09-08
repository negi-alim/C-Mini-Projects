
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

    printf("Enter number of students: ");
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
        printf("Enter detail of student #%d", i);

        printf("\nEnter First Name: ");
        scanf("%s", &students[i].firstName);

        printf("Enter Last Name: ");
        scanf("%s", &students[i].lastName);

        printf("Enter ID: ");
        scanf("%s", &students[i].studentID);

        printf("Enter Score: ");
        scanf("%d", &students[i].score);
    }
}

void outputStudents(struct StudentInfo students[], int numberOfStudents) {
    int i;

    for (i = 1; i <= numberOfStudents; i++) {
        printf("\nStudent #%d Detail:", i);
        printf("\nFirstname: %s", students[i].firstName);
        printf("\nLastname: %s", students[i].lastName);
        printf("\nID: %s", students[i].studentID);
        printf("\nScore: %d\n", students[i].score);
    }
}
