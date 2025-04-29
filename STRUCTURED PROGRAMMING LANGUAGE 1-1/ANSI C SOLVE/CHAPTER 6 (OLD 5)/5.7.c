#include<stdio.h>

int main()
{
    int i,j=1;
    for(i=1; i<14; i++){
        for(int k=0;k<i; k++){
            printf("%d ",j);
            j++;
        }
        printf("\n");
    }
}
