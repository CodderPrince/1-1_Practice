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
        int i, count[26];//alphabet 26 ta tai array size toto niyesi
        gets(str);
        for(i=0; i<26; i++)
        {//jehetu ekhane count korte hobe tai eng 26 ta character kei null kore diyesi
            count[i]=0;
        }
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
    }
    return 0;
}

/* prince
 if(str[i]>= 'a' && str[i]<= 'z')
 p ki 'a' theke boro or soman and z theke soto or soman ..true           
                count[str[i]-'a']++;
 0 index e p ase tai p er ascii value           
*/
