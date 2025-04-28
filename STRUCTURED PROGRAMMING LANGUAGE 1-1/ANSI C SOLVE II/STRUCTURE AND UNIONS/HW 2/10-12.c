#include <stdio.h>
#include <string.h>

// Define the census structure
struct census
{
    char city[100];
    long population;
    float literacy;
};

// Function to swap two census records
void swap(struct census *a, struct census *b)
{
    struct census temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort the list alphabetically
void sortAlphabetically(struct census cities[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(cities[i].city, cities[j].city) > 0)
            {
                swap(&cities[i], &cities[j]);
            }
        }
    }
}

// Function to sort the list based on literacy level
void sortByLiteracy(struct census cities[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (cities[i].literacy < cities[j].literacy)
            {
                swap(&cities[i], &cities[j]);
            }
        }
    }
}

// Function to sort the list based on population
void sortByPopulation(struct census cities[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (cities[i].population < cities[j].population)
            {
                swap(&cities[i], &cities[j]);
            }
        }
    }
}

// Function to display the list with formatted output
void displayList(struct census cities[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("City: %-10s Population: %-5ld Literacy: %.4f\n", cities[i].city, cities[i].population, cities[i].literacy);
    }
}

int main()
{
    struct census cities[5];

    // Read details for 5 cities
    for (int i = 0; i < 2; i++)
    {
        printf("Enter city name: ");
        scanf("%s", cities[i].city);
        printf("Enter population: ");
        scanf("%ld", &cities[i].population);
        printf("Enter literacy level: ");
        scanf("%f", &cities[i].literacy);
    }

    // Sort the list alphabetically
    sortAlphabetically(cities, 2);
    printf("\nSorted Alphabetically:\n");
    displayList(cities, 5);

    // Sort the list based on literacy level
    sortByLiteracy(cities, 2);
    printf("\nSorted by Literacy Level:\n");
    displayList(cities, 2);

    // Sort the list based on population
    sortByPopulation(cities, 2);
    printf("\nSorted by Population:\n");
    displayList(cities, 2);

    return 0;
}
