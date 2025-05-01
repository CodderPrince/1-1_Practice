/*question ta emon ekta line input dite hobe tarpor sei line jekono 
ekta word kotobar ase count korte hobe..string must be use to solve*/
#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();//gets function use korle get character function use kortei hobe
    while(t--)
    {
        char str[10001],ch[2];//string size important in question this is clarify
        int i,count=0;
        gets(str);
        gets(ch);
        for(i=0; i<strlen(str); i++)
        {//ekhon loop er moddhe diye puro string ta input nibo and length porjonto chalabo
            if(str[i]==ch[0])
            /*first line er zero index theke khoja start korbo and je letter ta khujbo seta 
            of course single word tai 2nd string er 0 index ei thakbe tai check korbo
            jokhoni letter t khuje pabo tokhon count er value increase korbo*/
            {
                count++;
            }
        }
        if(count>0)
        /*ekhon count er man jodi 0 hoi mane ekbaro letter ti khuje na pai tahole to print 
        korte hobe na tai ekhane abar condition diyesi ar output er moto printf koresi*/
        {
            printf("Occurrence of '%c' in '%s' = %d\n",ch[0],str,count);
        }
        else
        {
            printf("'%c' is not present\n",ch[0]);
        }
    }
    return 0;
}