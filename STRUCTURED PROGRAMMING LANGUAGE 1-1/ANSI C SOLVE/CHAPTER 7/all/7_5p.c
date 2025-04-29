#include<stdio.h>
#define ROW 5
#define COL 5

int main()
{
    int row, col,array[ROW][COL];
    int i,j;
    printf("\n     MULTIPLICATION TABLE\n\n");
    printf("    ");

    for(j=1; j<=COL; j++)
    {
        printf("%4d",j);
    }
    printf("\n");
    printf("------------------------------\n");

    for(i=0; i<ROW; i++)
    {
        row= i+1;
        printf("%2d |",row);
    
    for(j=1; j<=COL; j++)
    {
        col=j;
        array[i][j]= row*col;
        printf("%4d", array[i][j]);
    }
    printf("\n");
    }

    return 0;
}
/*
array[0][1] mane bojhai 0 index mane 1st row er 1 index er coloumn= 1*1=1 print hobe
tarpor 2 3 4 5 1st row print hoye jabe
row= 1+1=2 
array[1][2] mane 2nd row er 2nd column = 2*2=4
4 6 8 10
eibhabe print hote thakbe
*/