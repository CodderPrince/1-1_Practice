#include <stdio.h>
#include <string.h>

struct Date
{
    int day;
    char month[10];
    int year;
};

struct StudentRecord
{
    char name[100];
    struct Date dateOfBirth;
    double totalMarks;
    int rank;
};

int main()
{
    struct StudentRecord students[10];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf(" %[^\n]s", students[i].name);

        printf("Enter the date of birth student: %d\n", i + 1);
        printf("Enter day: ");
        scanf("%d", &students[i].dateOfBirth.day);
        printf("Enter month: ");
        scanf(" %[^\n]s", students[i].dateOfBirth.month);
        printf("Enter year: ");
        scanf("%d", &students[i].dateOfBirth.year);

        printf("Enter the total marks obtained by student %d: ", i + 1);
        scanf("%lf", &students[i].totalMarks);
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        students[i].rank = 1;
        for (int j = 0; j < 3; j++)
        {
            if (students[j].totalMarks > students[i].totalMarks)
            {
                students[i].rank++;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (students[i].rank > students[j].rank)
            {
                struct StudentRecord temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\n**Rank-wise list of students**\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Rank %d:\n", students[i].rank);
        printf("Name: %s\n", students[i].name);
        printf("Date of Birth: %s %d, %d\n", students[i].dateOfBirth.month, students[i].dateOfBirth.day, students[i].dateOfBirth.year);
        printf("Total Marks: %.2lf\n", students[i].totalMarks);
        printf("\n");
    }

    return 0;
}
