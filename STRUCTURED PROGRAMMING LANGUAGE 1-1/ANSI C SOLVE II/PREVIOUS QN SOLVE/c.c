#include <stdio.h>

int main()
{
    char arr[] = "Too Easy or Too Difficult";
    float *f = (float *)arr;
    f += 7; // Corrected the syntax
    printf("\n%s\n", f);
    // printf("\n%s\n", ++f); // Corrected the space between % and s

    return 0;
}

// T o o   E a s y   o  r    T  o  o     D  i  f  f   i c  u   l t '\0'
// 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25

/*
float muloto 4bytes kore jaiga nei
agei jenesi string er sathe int or float add korle oto ghor
skip hoye jai
jehetu ekhane float use kora hosse tai muloto bytes kore agabe

f += 0 // 0  index theke start hobe : Too Easy or Too Difficult
f += 1 // 4  index theke start hobe : Easy or Too Difficult
f += 2 // 8  index theke start hobe :  or Too Difficult
f += 3 // 12 index theke start hobe : Too Difficult
f += 4 // 16 index theke start hobe : Difficult
f += 5 // 20 index theke start hobe : icult
f += 6 // 24 index theke start hobe : t
f += 7 // 28 index theke start hobe : index-25< index-28, so print garbage value

*/
