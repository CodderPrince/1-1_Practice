#include<stdio.h>
int main()
{
    for(int i=0; i<10; i++)
    {
        if(i>5)
        {
            goto end;
        }
        printf("%d ",i);
    }

    end:
    printf("\nThe program is executed successfully!\n");
    
    return 0;
}