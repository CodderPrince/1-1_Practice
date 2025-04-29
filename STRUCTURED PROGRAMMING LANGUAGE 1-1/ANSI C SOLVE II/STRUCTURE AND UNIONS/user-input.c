#include <stdio.h>
#include <string.h>

struct person
{
    char name[23];
    int age;
    float salary;
};

int main()
{
    struct person person1;

    printf("Enter name: ");
    scanf("%s", person1.name);

    printf("Enter age: ");
    scanf("%d", &person1.age);

    printf("Enter salary: ");
    scanf("%f", &person1.salary);

    printf("Name = %s\n", person1.name);
    printf("Age = %d\n", person1.age);
    printf("Salary = %f\n", person1.salary);

    return 0;
}
