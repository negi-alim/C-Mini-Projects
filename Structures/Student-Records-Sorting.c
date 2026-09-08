
#include <stdio.h>
#include <conio.h>

// Structure for storing basic student information.
struct StudentRecord {
    char name[30];
    int score;
    int studentNumber;
};

int main() {
    struct StudentRecord student1, student2, student3, student4, student5;
    struct StudentRecord student6, student7, student8, student9, student10;

    // Read information for the first student.
    printf("enter name: ");
    scanf("%s", student1.name);
    fflush(stdin);

    printf("enter score: ");
    scanf("%d", &student1.score);

    printf("enter student number: ");
    scanf("%d", &student1.studentNumber);

    // Read information for the second student.
    printf("\nenter name: ");
    scanf("%s", student2.name);
    fflush(stdin);

    printf("enter score: ");
    scanf("%d", &student2.score);

    printf("enter student number: ");
    scanf("%d", &student2.studentNumber);

    // Read information for the third student.
    printf("\nenter name: ");
    scanf("%s", student3.name);
    fflush(stdin);

    printf("enter score: ");
    scanf("%d", &student3.score);

    printf("enter student number: ");
    scanf("%d", &student3.studentNumber);

    // Read information for the fourth student.
    printf("\nenter name: ");
    scanf("%s", student4.name);
    fflush(stdin);

    printf("enter score: ");
    scanf("%d", &student4.score);

    printf("enter student number: ");
    scanf("%d", &student4.studentNumber);

    // Read information for the fifth student.
    printf("\nenter name: ");
    scanf("%s", student5.name);
    fflush(stdin);

    printf("enter score: ");
    scanf("%d", &student5.score);

    printf("enter student number: ");
    scanf("%d", &student5.studentNumber);

    // Read information for the sixth student.
    printf("\nenter name: ");
    scanf("%s", student6.name);
    fflush(stdin);

    printf("enter score: ");
    scanf("%d", &student6.score);

    printf("enter student number: ");
    scanf("%d", &student6.studentNumber);

    // Read information for the seventh student.
    printf("\nenter name: ");
    scanf("%s", student7.name);
    fflush(stdin);

    printf("\enter score: ");
    scanf("%d", &student7.score);

    printf("enter student number: ");
    scanf("%d", &student7.studentNumber);

    // Read information for the eighth student.
    printf("\nenter name: ");
    scanf("%s", student8.name);
    fflush(stdin);

    printf("enter score: ");
    scanf("%d", &student8.score);

    printf("enter student number: ");
    scanf("%d", &student8.studentNumber);

    // Read information for the ninth student.
    printf("\nenter name: ");
    scanf("%s", student9.name);
    fflush(stdin);

    printf("enter score: ");
    scanf("%d", &student9.score);

    printf("enter student number: ");
    scanf("%d", &student9.studentNumber);

    // Read information for the tenth student.
    printf("\nenter name: ");
    scanf("%s", student10.name);
    fflush(stdin);

    printf("enter score: ");
    scanf("%d", &student10.score);

    printf("enter student number: ");
    scanf("%d", &student10.studentNumber);

    printf("\n\nStudents in order:");

    // Search through possible student numbers in descending order
    // and display students when their numbers are found.
    for (int studentNumber = 999999999, foundStudents = 0;
         foundStudents < 10;
         studentNumber--) {

        if (studentNumber == student1.studentNumber) {
            printf("\n\nname: %s", student1.name);
            printf("\nscore: %d", student1.score);
            printf("\nstudent number: %d", student1.studentNumber);
            foundStudents++;
        }

        if (studentNumber == student2.studentNumber) {
            printf("\n\nname: %s", student2.name);
            printf("\nscore: %d", student2.score);
            printf("\nstudent number: %d", student2.studentNumber);
            foundStudents++;
        }

        if (studentNumber == student3.studentNumber) {
            printf("\n\nname: %s", student3.name);
            printf("\nscore: %d", student3.score);
            printf("\nstudent number: %d", student3.studentNumber);
            foundStudents++;
        }

        if (studentNumber == student4.studentNumber) {
            printf("\n\nname: %s", student4.name);
            printf("\nscore: %d", student4.score);
            printf("\nstudent number: %d", student4.studentNumber);
            foundStudents++;
        }

        if (studentNumber == student5.studentNumber) {
            printf("\n\nname: %s", student5.name);
            printf("\nscore: %d", student5.score);
            printf("\nstudent number: %d", student5.studentNumber);
            foundStudents++;
        }

        if (studentNumber == student6.studentNumber) {
            printf("\n\nname: %s", student6.name);
            printf("\nscore: %d", student6.score);
            printf("\nstudent number: %d", student6.studentNumber);
            foundStudents++;
        }

        if (studentNumber == student7.studentNumber) {
            printf("\n\nname: %s", student7.name);
            printf("\nscore: %d", student7.score);
            printf("\nstudent number: %d", student7.studentNumber);
            foundStudents++;
        }

        if (studentNumber == student8.studentNumber) {
            printf("\n\nname: %s", student8.name);
            printf("\nscore: %d", student8.score);
            printf("\nstudent number: %d", student8.studentNumber);
            foundStudents++;
        }

        if (studentNumber == student9.studentNumber) {
            printf("\n\nname: %s", student9.name);
            printf("\nscore: %d", student9.score);
            printf("\nstudent number: %d", student9.studentNumber);
            foundStudents++;
        }

        if (studentNumber == student10.studentNumber) {
            printf("\n\nname: %s", student10.name);
            printf("\nscore: %d", student10.score);
            printf("\nstudent number: %d", student10.studentNumber);
            foundStudents++;
        }
    }

    return 0;
}