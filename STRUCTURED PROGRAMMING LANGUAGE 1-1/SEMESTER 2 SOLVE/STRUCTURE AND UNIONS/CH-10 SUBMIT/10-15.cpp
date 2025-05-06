/*
    old 10.15 new 11.15     **PRINCE**
    10.15 Design a structure student_record to contain name,
    date of birth and total marks obtained.
    Use the date structure designed in Exercise 10.4 (May 5, 2001)
    to represent the date of birth.
    Develop a program to read data for 10 students in a class and
    list them rank-wise.
*/

#include <iostream>
#include <string>
using namespace std;

#define nl endl

struct Date
{
    int day;
    string month;
    int year;
};

struct StudentRecord
{
    string name;
    Date dateOfBirth;
    double totalMarks;
    int rank;
};

int main()
{
    StudentRecord students[3];
    cout << "**Enter student details**\n";
    int i, j;

    for (i = 0; i < 3; i++)
    {
        cout << "\nEnter the name of student " << i + 1 << ": ";
        cin.ignore();
        getline(cin, students[i].name);

        cout << "Enter the date of birth of student " << i + 1 << ":\n";
        cout << "Enter day: ";
        cin >> students[i].dateOfBirth.day;
        cout << "Enter month: ";
        cin >> ws;
        getline(cin, students[i].dateOfBirth.month);
        cout << "Enter year: ";
        cin >> students[i].dateOfBirth.year;

        cout << "Enter the total marks obtained by student " << i + 1 << ": ";
        cin >> students[i].totalMarks;
        cout << nl;
    }

    for (i = 0; i < 3; i++)
    {
        students[i].rank = 1;
        for (j = 0; j < 3; j++)
        {
            if (students[i].totalMarks < students[j].totalMarks)
            {
                students[i].rank++;
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (students[i].rank > students[j].rank)
            {
                swap(students[i], students[j]);
            }
        }
    }

    cout << "\n**Rank-wise list of students**\n";
    for (i = 0; i < 3; i++)
    {
        cout << "\nRank: " << students[i].rank << "\n";
        cout << "Name: " << students[i].name << "\n";
        cout << "Date of Birth: " << students[i].dateOfBirth.month << " " << students[i].dateOfBirth.day << ", " << students[i].dateOfBirth.year << "\n";
        cout << "Total marks: " << students[i].totalMarks << "\n";
        cout << nl;
    }

    return 0;
}
