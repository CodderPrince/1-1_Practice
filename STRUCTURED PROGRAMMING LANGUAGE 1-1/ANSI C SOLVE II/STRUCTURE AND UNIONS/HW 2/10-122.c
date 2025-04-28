#include <stdio.h>
#include <string.h>

struct census
{
    char cityName[100];
    long population;
    float literacy;
};

void sortAlphabetically(struct census cities[], int n);
void swap(struct census *a, struct census *b);
void displaySortedList(struct census cities[], int n);
void sortLiteracy(struct census cities[], int n);
void sortPopulation(struct census cities[], int n);

int main()
{
    struct census cities[5];
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("****Enter the city details no: %d ****\n", i + 1);
        printf("Enter the city name: ");
        scanf("%s", cities[i].cityName);
        printf("Enter the population: ");
        scanf("%ld", &cities[i].population);
        printf("Enter the literacy level: ");
        scanf("%f", &cities[i].literacy);
    }
    sortAlphabetically(cities, 2);
    printf("\n**Sorted Alphabetically**\n");
    displaySortedList(cities, 2);
    sortLiteracy(cities, 2);
    printf("\n**Sorted by Literacy**\n");
    displaySortedList(cities, 2);
    sortPopulation(cities, 2);
    printf("\n**Sorted by Population**\n");
    displaySortedList(cities, 2);
}

void sortAlphabetically(struct census cities[], int n)
{
    int i,j;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(strcmp(cities[i].cityName,cities[i].cityName)>0)
            {
                swap(&cities[i],&cities[j]);
            }
        }
    }
}
void swap(struct census *a, struct census *b)
{
    struct census temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void displaySortedList(struct census cities[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("City: %-10s Population: %-10ld Literacy: %.2f\n", cities[i].cityName, cities[i].population, cities[i].literacy);
    }
    printf("\n");
}
void sortLiteracy(struct census cities[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (cities[i].literacy < cities[j].literacy)
            {
                swap(&cities[i], &cities[j]);
            }
        }
    }
}

void sortPopulation(struct census cities[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (cities[i].population < cities[j].population)
            {
                swap(&cities[i], &cities[j]);
            }
        }
    }
}