/*#include<stdio.h>
void test(int *a);
int main()
{
    int x=50; \
    test(&x);
    printf("%d\n",x);
}
void test(int *a)
{
    *a = *a + 50;
}*/

#include<stdio.h>

int main()
{
    double arr[5];
    int i;
    double x;
    for(i=0; i<5; i++)
    {
        scanf("%lf",&arr[i]);
    }
    printf("Value of array\n");
    for(i=0; i<5; i++)
    {
        printf("%lf ",arr[i]);
    }
    printf("\n");
}