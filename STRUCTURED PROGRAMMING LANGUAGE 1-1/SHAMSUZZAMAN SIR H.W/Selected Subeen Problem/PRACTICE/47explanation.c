#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,i,j,k;
        scanf("%d",&x);
        int arr1[x];
        for(i=0; i<x; i++)
        {//input 1st array
            scanf("%d",&arr1[i]);
        }
        scanf("%d",&y);
        int arr2[y];
        for(j=0; j<y; j++)
        {//input 2nd array
            scanf("%d",&arr2[j]);
        }
        int temp[x+y];//3rd array length
        for(i=0,j=0,k=0; i<x && j<y; k++)
        {
            if(arr1[i]<arr2[j])
            {//sort array as ascending order so find the smallest element
                temp[k]=arr1[i];
                i++;
            }
            else
            {
                temp[k]=arr2[j];
                j++;
            }
        }
        while(i<x)
        {// if 1st array index is smaller than 2nd array then this condition work
        /*a[n1]= 1,3,5
        b[n2]= 4,10
        ekhane 1st array boro tai ei condition work korbe na*/
            temp[k]=arr1[i];
            i++;
            k++;
        }
        while(j<y)
        {//if 2nd array index is shorter than 1st array then this condition is work
            temp[k]=arr2[j];
            j++;
            k++;
        }
        for(k=0; k<(x+y); k++)
        {// print the final element
            printf("%d ",temp[k]);
        }
        printf("\n");
    }
    return 0;
}