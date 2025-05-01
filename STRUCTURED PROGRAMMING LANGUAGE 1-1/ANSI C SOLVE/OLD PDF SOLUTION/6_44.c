#include<stdio.h>

int main() 
{
    int a = 0, b = 1, c, i, n;
    printf("Enter the number of terms: ");
    scanf("%d", &n); 
    printf("Fibonacci Series: ");  
    if (n >= 1) 
    {
        printf("%d ", b);
    }
    for (i = 2; i <= n; i++) 
    {
        c = a + b;
        printf("%d ", c);
        
        a = b;
        b = c;
    }
    
    printf("\n");
    
    return 0;
}
/*
1. n=8>1,1 i=2, c=0+1=1 1,1 a=1,b=1
2. i=3, c=1+1=2 1,1,2 a=1,b=2
3. i=4, c=1+2=3 1,1,2,3 a=2,b=3
*/