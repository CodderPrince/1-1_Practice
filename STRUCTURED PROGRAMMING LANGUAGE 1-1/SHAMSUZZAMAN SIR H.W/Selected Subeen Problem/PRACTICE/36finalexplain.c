#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char str[n][10001];
        int i,j;
        for(i=0; i<n; i++)
        {
             scanf("%s",str[i]);
        }
       
/*lexicographyr kisu rule ase
1. big,small > positive value return korbe ex. cat,bat>0 karon c, b er pore ase tai c is biggest than b
2. small,big < negative value return korbe ex. bat,cat<0 karon b, c er age ase tai b is smaller than c
3. equal,equal = zero return korbe ex. bat,bat=0 karon b,b duitr value same tai both are equal
*/

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(strcmp(str[i],str[j])>0)
            /*ekhane muloto check kore stt[0] mane 0 row er string[cat]
            str[1] mane 1 row er string [bat] theke lexicography boro kina */
            {
                char temp [10001];
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }

    for(i=0; i<n; i++)
    {
        printf("%s\n",str[i]);
    }
    }

    return 0;
}

/*
[3][6]
0,0  0,1  0,2  0,3  0,4  0,5
c     a    t  '\0' '\0'
1,0  1,1  1,2  1,3  1,4  1,5
b     a    t   '\0'
2,0  2,1  2,2  2,3  2,4  2,5
h     e    l    l    o   '\0'
*/

/*
1. i=0,0<3; j=1, 1<3; cat,bat>0 cause c is bigger than b so condition true so swap two string
[3][6]
0,0  0,1  0,2  0,3  0,4  0,5
b     a    t  '\0' '\0'
1,0  1,1  1,2  1,3  1,4  1,5
c     a    t   '\0'
2,0  2,1  2,2  2,3  2,4  2,5
h     e    l    l    o   '\0'
2. i=0,i<3; j=2, 2<3; bat,hello<0 cause b is smaller than h so condition is false and not swap
3. i=0,i<3; j=2, 3<3 condition false so get back the outer loop
4. i=1,1<3; j=2,2<3; cat,hello<0 cause c is smaller than h so condition is false and not swap

now get out this nested loop and go to the last loop for print the string
[3][6]
0,0  0,1  0,2  0,3  0,4  0,5
b     a    t  '\0' '\0'
1,0  1,1  1,2  1,3  1,4  1,5
c     a    t   '\0'
2,0  2,1  2,2  2,3  2,4  2,5
h     e    l    l    o   '\0'

1. i=0; 0<3; 0 row means 1st row is fillup by bat so print this bat
2. i=1; 1<3; 1 row means 2nd row is fillup by cat so print this cat
3. i=2; 2<3; 2 row means 3rd row is fillup by hello so print this hello
*/