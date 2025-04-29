#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[]={2,3,4,5,6,7,8,9};
    int left=0,right=8,middle,find_item=70;
    while(left<=right)
    {
        middle=(left+right)/2;
        if(arr[middle]==find_item)
        {
            printf("Find item is found at index: %d\n",middle);
            return 0;
        }
        else if(arr[middle]<find_item)
        {
            left = left+1;
        }
        else
        {
            right = right-1;
        }
    }
    printf("Item not found\n");
getch();
    return 0;

}