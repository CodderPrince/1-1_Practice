//BASIC STRUCTURE

#include<stdio.h>
#include<string.h>

struct person
{
    char name[23];
    int age;
    float salary;
};

int main()
{
    struct person person1,person2;
    strcpy(person1.name, "prince");
    person1.age = 21;
    person1.salary = 1000000000000000.999999;
    printf("Name = %s\n",person1.name);
    printf("Age = %d\n",person1.age);
    printf("Salary = %f\n",person1.salary);

    return 0;
}