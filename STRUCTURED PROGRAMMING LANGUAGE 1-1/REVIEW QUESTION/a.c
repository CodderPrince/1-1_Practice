#include <stdio.h>

int main()
{
    int i = 5;

    printf("%d %d %d %d %d %d\n", i++, i--, ++i, --i, i);
}

// printf("%d %d %d\n",i,i++,i--);
// printf("%d\n", i);
// printf("%d\n", i++);
// printf("%d\n", i--);
// printf("%d\n",i);
// printf("%d %d %d %d\n", i, i++, i--,i++);
// 6 5 6 5
/*
1.  i=5;
    i++; now i=5 carry 1
    i--; now i= 5+1(carry)=6 now carry -1
    i++= 6 + (-1)carry = 5 carry 1
    i= 5+1=6

2.  i=6
    i++= 6 carry 1
    i--= 6 carry -1
    i++= 6-1=5 carry 1

3.

2.
*/
