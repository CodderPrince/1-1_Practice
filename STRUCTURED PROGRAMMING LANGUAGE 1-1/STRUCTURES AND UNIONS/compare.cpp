// Q: Write a program to illustrate the comparison of structure variables.

#include <bits/stdc++.h>
using namespace std;

struct Person
{
    char name[20];
    int age;
};
int main()
{
    Person person1 = {"PRINCE", 23};
    Person person2 = {"PRINCE", 23};
    if ((strcmp(person1.name, person2.name) == 0) && (person1.age == person2.age))
    {
        cout << "\nBoth are same!\n\n";
    }
    else
    {
        cout << "\nBoth are not same!\n\n";
    }

    return 0;
}
