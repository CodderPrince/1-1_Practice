/*
        1 2 3 4 5 6
         1   2   3   4     5
  index: 0 1 2 3 4 5 6 7 8 9
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();/*gets er maddhome input niyesi tai ei function use koresi
                mon khushi moto sob jaigai eta use kora jabe na eta sob somoy
                test case input neyar pore nite hobe nahole wrong answer dekhabe*/
    while(t--)
    {
        char str[100001];//condition deya ase 1,000,000,0 er porom man mane modulus tai 100000 and 1 ta string use koresi tai 1 extra niyesi
        gets(str);
        int len=0;
        int count = 1;//start e count er man 1 dhore niyesi
        len= strlen(str);
        for(int i=0; i<len; i++)//last e null character thake tai tar aag porjonto loop ta cholbe
        {
            if(str[i]== ' '  && str[i+1]!= ' ')
            /*upore example deya ase tar hisebe i=0 & i+1=1
            0 index e space ase and 1 index e space nei etai bujiyese tai condition false
            kintu 0 index e to value royese tai start e count 1 kore niyesi i=1 & 2
            1 index e space ase and 2 index e space nei tai count 1 increase hobe
            i=0 & 1 2nd example
            0 index e space nei 1 index e space ase tai false
            1 index e space ase 2 index eo space ase tai false
            2 index e space ase 3 index e space nei tai count++
            eibhabe condition ti kaaj kore*/
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}