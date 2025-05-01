#include <stdio.h>

int main()
{
    int size;
    float costs[size];
    float sum = 0, average, range, max = costs[0], min = costs[0];
    scanf("%d",&size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d",&costs[i]);
        sum = sum + costs[i];
        if (costs[i] > max) 
        {
            max = costs[i];
        }
        if (costs[i] < min) 
        {
            min = costs[i];
        }
    }
    average = sum / size;
    range = max - min;
    
    printf("The average cost is %.2f.\n", average);
    printf("The range of values is %.2f.\n", range);
    
    return 0;
}