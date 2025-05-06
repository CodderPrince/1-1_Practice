/*  PRINCE[12105007]
Problem number: 12.5
Write a program that reads a file containing integers and appends at its end
the sum of all the integers.
Firstly Create a file and store some integers file
Then access the file
_
    Testcase:   integers.txt            Output:
                1                       1
                2                       2
                3                       3
                h
                Sum =                   Sum = 6
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    FILE *textFIle = fopen("integers.txt", "r");
    if (textFIle == NULL)
    {
        cout << "\nError opening file!\n\n";
        return 1;
    }

    ll num, sum = 0, result;

    while ((result = fscanf(textFIle, "%d", &num)) != EOF)
    {
        if (result == 1)
        {
            sum += num;
        }
        else
        {
            cout << "Warning! Non-integers found!\n";
            fscanf(textFIle, "%*s");
        }
    }

    fclose(textFIle);
    textFIle = fopen("integers.txt", "a");
    fprintf(textFIle, "%d\n", sum);
    fclose(textFIle);
    cout << "Sum append successfully!\n\n";

    return 0;
}