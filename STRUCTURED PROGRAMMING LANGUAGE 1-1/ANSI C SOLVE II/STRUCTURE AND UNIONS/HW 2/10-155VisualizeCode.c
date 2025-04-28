#include <stdio.h>
#include <string.h>

// Define the structure for date
struct Date {
    int day;
    char month[4];
    int year;
};

// Define the structure for a single student's record
struct StudentRecord {
    char name[7];
    struct Date dateOfBirth;
    double totalMarks;
    int rank;
};

int main() {
    // Create an array of structures to store multiple students' records
    struct StudentRecord students[3];

    // Initialize data for 3 students
    strcpy(students[0].name, "Shagor");
    students[0].dateOfBirth.day = 4;
    strcpy(students[0].dateOfBirth.month, "Oct");
    students[0].dateOfBirth.year = 2002;
    students[0].totalMarks = 98;

    strcpy(students[1].name, "Dipu");
    students[1].dateOfBirth.day = 6;
    strcpy(students[1].dateOfBirth.month, "Jul");
    students[1].dateOfBirth.year = 2000;
    students[1].totalMarks = 96;

    strcpy(students[2].name, "Prince");
    students[2].dateOfBirth.day = 5;
    strcpy(students[2].dateOfBirth.month, "May");
    students[2].dateOfBirth.year = 2001;
    students[2].totalMarks = 99;

    // Calculate ranks
    for (int i = 0; i < 3; i++) {
        students[i].rank = 1;
        for (int j = 0; j < 3; j++) {
            if (students[j].totalMarks > students[i].totalMarks) {
                students[i].rank++;
            }
        }
    }

    // Sort by rank
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (students[i].rank > students[j].rank) {
                struct StudentRecord temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    // Print the rank-wise list of students
    printf("**Rank-wise list of students**\n");
    for (int i = 0; i < 3; i++) {
        printf("Rank %d:\n", students[i].rank);
        printf("Name: %s\n", students[i].name);
        printf("Date of Birth: %s %d, %d\n", students[i].dateOfBirth.month, students[i].dateOfBirth.day, students[i].dateOfBirth.year);
        printf("Total Marks: %.2lf\n", students[i].totalMarks);
        printf("\n");
    }

    return 0;
}