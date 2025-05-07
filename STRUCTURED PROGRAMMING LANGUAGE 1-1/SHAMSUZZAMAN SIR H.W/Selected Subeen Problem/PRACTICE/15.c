#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str[10001];//jehetu string size deya ase ar null character er jonno 1 besi niyesi
        int i, count[26]={0};//alphabet 26 ta tai array size toto niyesi
        gets(str);
        for(i=0; i<=strlen(str); i++)
        {//ebar word ta count korbo tai tar length porjonto loop use korbo
            if(str[i]>= 'a' && str[i]<= 'z')
            {//etar explain niche exp soho dibo
                count[str[i]-'a']++;
            }//etar explain oo niche
        }
        for(i=0; i<26; i++)
        {
            if(count[i]!=0)
            {
                printf("%c = %d\n", 'a'+i, count[i]);
            }
        }
        printf("\n");
    }
    return 0;
}

/* prince
 if(str[i]>= 'a' && str[i]<= 'z')
 p ki 'a' theke boro or soman and z theke soto or soman ..true           
                count[str[i]-'a']++;
 0 index e p ase tai p er ascii value 112-97= 15  
 count variable er moddhe 15 index e p ase tai tar value 1 increase korbe
 abar r= 113-97=16 index a r ase tai count er 16 index er value 1 increase korbe
 eibhabe serially cholte thakbe      


 printf er somoy check korbe
 97+0=97 mane 0 index jehkhane a er value thakar kotha sekhane count koto jehetu count 0 tai i++ hobe
 eibhabe 0,1 index check korbe
 97+2=99 mane 2 index er moddhe c er value count hisebe koto ase seta check korbe jehetu count 1 print hobe  
*/
