#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
   
       int arr[]={2,3,5,7,8,9};
       int left=0,right=6,find_item=7;
       while(left<=right)
       {
        int middle = (left+right)/2;
        if(arr[middle]==find_item)
        {
            printf("Search is over!\n");
            printf("Find item is found at index: %d\n",middle);
            return 0;
        }
        else if(arr[middle]<find_item)
        {
            left= left+1;
        }
        else
        {
            right = right-1;
        }
       }
       printf("Item not found\n");
    

    return 0;
}