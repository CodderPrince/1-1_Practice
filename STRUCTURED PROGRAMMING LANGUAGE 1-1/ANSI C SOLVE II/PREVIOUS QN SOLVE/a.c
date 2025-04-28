/*#include <stdio.h>

int main()
{
    // int k, j = 5;
    // printf("%d\n", k = j == 6);
    // printf("%d\n", k = ++j == 6);
    // for(int j=0; j==3; j++)
    /// printf("%d ",j);
    // int a = 16;
    // a = a >> 5 ? 100 : 200;
    // printf("Value: %d\n", a);

    /*int ch;
    scanf("%d",&ch);
    if (ch == 0 || ch == 1 || ch == 2)
        printf("Enter anything greater than 2");
    else if (ch == 3)
        printf("You entered 3");
    else if(ch == 4)
        printf("You entered 4");
    else
    printf("Please enter a valid choice");*/

/* int ch;
 printf("Enter a choice: ");
 scanf("%d", &ch);

 switch (ch)
 {
 case 0:
 case 1:
 case 2:
     printf("Enter anything greater than 2");
     break;

 case 3:
     printf("You entered 3");
     break;

 case 4:
     printf("You entered 4");
     break;

 default:
     printf("Invalid choice. Please enter a number between 0 and 4");
 }*/

/*for (int i = 0; i < 100; i++)
{
    if (i != 30)
    {
        i += 2;
        continue;
    }
    if (i = 100)
        break;
    printf("%d ", i);
}*/

// int i=1;
// int j;

// printf("%d\n",j=--i == 0);

#include <stdio.h>
int main()
{
    int i = 0;
loop: // label for the loop
    if (i != 30)
    {
        i += 2;
        goto loop; // jump to the beginning of the loop
    }
    if (i == 100)
        goto end; // jump to the end of the program
    printf("%d ", i);
    i++;
    goto loop; // jump to the beginning of the loop
end:           // label for the end of the program
    return 0;
}
