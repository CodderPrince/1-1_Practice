#include <stdio.h>
#include <string.h>

#define STUDENTS 5
#define SUBJECTS 4

struct Student
{
    char name[20];
    int marks[SUBJECTS];
    int totalMarks;
};

void get_list(struct Student students[], int n);
void get_sum(struct Student students[], int n);
void get_rank_list(struct Student students[], int n);
void print_list(struct Student students[], int n);

int main()
{
    struct Student students[STUDENTS];

    printf("Input students names & their marks in four subjects:\n");
    get_list(students, STUDENTS);
    get_sum(students, STUDENTS);
    printf("\n");
    print_list(students, STUDENTS);
    get_rank_list(students, STUDENTS);
    printf("\nRanked List\n\n");
    print_list(students, STUDENTS);

    return 0;
}

void get_list(struct Student students[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%s", students[i].name);
        for (int j = 0; j < SUBJECTS; j++)
            scanf("%d", &students[i].marks[j]);
    }
}

void get_sum(struct Student students[], int n)
{
    for (int i = 0; i < n; i++)
    {
        students[i].totalMarks = 0;
        for (int j = 0; j < SUBJECTS; j++)
            students[i].totalMarks += students[i].marks[j];
    }
}

void get_rank_list(struct Student students[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (students[j].totalMarks < students[j + 1].totalMarks)
            {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

// Print out the list
void print_list(struct Student students[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%-20s", students[i].name);
        for (int j = 0; j < SUBJECTS; j++)
        printf("%5d", students[i].marks[j]);
        printf("%5d\n", students[i].totalMarks);
    }
}
