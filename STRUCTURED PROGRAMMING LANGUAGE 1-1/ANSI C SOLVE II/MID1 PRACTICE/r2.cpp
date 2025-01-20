#include <bits\stdc++.h>
using namespace std;

int main()
{
    char a[100] = "Hello", b[] = "Its Me";
    int l = strlen(a);
    int m = strlen(b);
    // cout << l << endl;
    // cout << m << endl;
    char *p = a;
    char *q = b;
    // cout << p << endl;

    // cout << q << endl;

    p += l;
    // q += 1; advances the pointer q by one position,
    // skipping the first character in the array b.
    q += m - l;
    // q += 1; advances the pointer q by one position,
    //  skipping the first character in the array b.
    // Now q points to the second character in the string "Its Me," which is 't'.
    // cout << p << endl; // llo
    // cout << q << endl; // ts Me
    do
    {
        *p++ = *q--;
        // cout<<"p : "<<*p<<endl;
        // cout<<"q : "<<*q<<endl;
    } while (m--);

    *p = '\0';

     printf("%s\t%s\n", a, q);
    //cout << a << endl;
    //cout << q << endl;
    // cout << b << endl;
    return 0;
}
