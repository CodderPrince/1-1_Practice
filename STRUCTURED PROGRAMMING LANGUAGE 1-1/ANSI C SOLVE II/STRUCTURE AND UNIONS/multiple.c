// create a 14th intake database[name,id,CGPA]

#include <stdio.h>
#include <string.h>

struct brurCSE
{
    char name[50];
    int age;
    float cgpa;
};

int main()
{
    struct brurCSE student[2];
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("Enter the Data of Student %d\n", i);
        printf("Enter student name: ");
        scanf("%s", student[i].name);
        printf("Enter student age: ");
        scanf("%d", &student[i].age);
        printf("Enter CGPA: ");
        scanf("%f", &student[i].cgpa);
    }
    printf("Data for student:\n");
    for (i = 0; i < 2; i++)
    {
        printf("\nStudent details:\n", i + 1);
        printf("Student %d name: %s\n", i + 1, student[i].name);
        printf("Student %d age: %d\n", i + 1, student[i].age);
        printf("Student %d CGPA: %f\n", i + 1, student[i].cgpa);
    }
    printf("\n");

    return 0;
}