#include <stdio.h>  
#include <string.h>  
   
int main() 
{
    char bin[100], one[100], two[100];
    int i, len, carry = 1;   
 
    printf("Enter a Binary Number: ");  
    scanf("%s", bin);  
   
    len = strlen(bin);
     
 for(i=0; i < len; i++) 
    {  
        if(bin[i]=='1') 
        {  
            one[i] = '0';  
        } 
        else 
        {  
            one[i] = '1';  
        } 
       
    }  
    one[len] = '\0';
      
    for(i = i-1; i >= 0; i--) 
    {  
        if(one[i]=='1' && carry==1)
        {
            two[i] = '0';  
        } 
        else if(one[i]=='0' && carry==1) 
        {  
            two[i] = '1';  
            carry = 0;  
        } 
        else 
        {  
            two[i] == one[i];  
        }  
    }  
    two[len] = '\0'; 
       
    printf("Two's Complement : %s", two);  
   
    return 0;  
} 