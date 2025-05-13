/*1 2 3 4 5 6
  1  2  3   4    5  6*/
#include<stdio.h>
#include<string.h>
int main()
{
    getchar();//gets er maddhome input niyesi tai ei function use koresi
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[10000001];
        gets(str);
        int len=0;
        int count = 1;//start e count er man 1 dhore niyesi
        len= strlen(str);
        for(int i=0; i<len; i++)
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