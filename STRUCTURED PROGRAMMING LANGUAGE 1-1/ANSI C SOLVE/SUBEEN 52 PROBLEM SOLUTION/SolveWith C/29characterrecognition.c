#include <stdio.h>
int main()
{
    int t;
    char c;
    scanf("%d", &t);
    while (t--) 
    {
        scanf(" %c", &c);
        /*ekta space diye input nite hobe jate new line or tab use korleo seta ignore hoi*/      
        if (c >= 'a' && c <= 'z') 
        {
            printf("Lowercase Character\n");
        } 
        else if (c >= 'A' && c <= 'Z')
        {
            printf("Uppercase Character\n");
        } 
        else if (c >= '0' && c <= '9') 
        {
            printf("Numerical Digit\n");
        } 
        else 
        {
            printf("Special Characters\n");
            /*jate sobai position na pai ei jonno last e s show kore na but Charactes hobe*/
        }
    }
    return 0;
}
