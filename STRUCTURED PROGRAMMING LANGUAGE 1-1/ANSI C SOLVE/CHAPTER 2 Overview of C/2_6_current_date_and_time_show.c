#include<stdio.h>
#include<time.h>
int main()
{
    time_t t;
    time(&t);
    printf("\n\nCurrent date and time: %s\n", ctime(&t));
    return 0;
}
