/*
old 10.13 new 11.13         *PRINCE*
10.13 Define a structure that can describe an hotel.
It should have members that include the name, address, grade,
average room charge, and number of rooms.
Write functions to perform the following operations:
• To print out hotels of a given grade in order of charges
• To print out hotels with room charges less than a given value
*/

#include <stdio.h>
#include <string.h>

struct Hotel
{
    char name[100];
    char address[200];
    int grade;
    double averageRoomCharge;
    int numRooms;
};

void printHotelsByGrade(struct Hotel hotels[], int numHotels, int targetGrade)
{
    printf("Hotels with grade %d:\n", targetGrade);
    for (int i = 0; i < numHotels; i++)
    {
        if (hotels[i].grade == targetGrade)
        {
            printf("Name: %s\n", hotels[i].name);
            printf("Address: %s\n", hotels[i].address);
            printf("Average Room Charge: $%.2lf\n", hotels[i].averageRoomCharge);
            printf("Number of Rooms: %d\n", hotels[i].numRooms);
            printf("\n");
        }
    }
}

void printHotelsByRoomCharge(struct Hotel hotels[], int numHotels, double maxRoomCharge)
{
    printf("Hotels with room charges less than $%.2lf:\n", maxRoomCharge);
    for (int i = 0; i < numHotels; i++)
    {
        if (hotels[i].averageRoomCharge < maxRoomCharge)
        {
            printf("Name: %s\n", hotels[i].name);
            printf("Address: %s\n", hotels[i].address);
            printf("Grade: %d\n", hotels[i].grade);
            printf("Number of Rooms: %d\n", hotels[i].numRooms);
            printf("\n");
        }
    }
}

int main()
{
    int numHotels;
    printf("Enter the number of hotels: ");
    scanf("%d", &numHotels);

    struct Hotel hotels[numHotels];

    for (int i = 0; i < numHotels; i++)
    {
        printf("Enter the name of hotel %d: ", i + 1);
        scanf(" %[^\n]s", hotels[i].name);
        printf("Enter the address of hotel %d: ", i + 1);
        scanf(" %[^\n]s", hotels[i].address);
        printf("Enter the grade of hotel %d: ", i + 1);
        scanf("%d", &hotels[i].grade);
        printf("Enter the average room charge of hotel %d: $", i + 1);
        scanf("%lf", &hotels[i].averageRoomCharge);
        printf("Enter the number of rooms of hotel %d: ", i + 1);
        scanf("%d", &hotels[i].numRooms);
        printf("\n");
    }

    double maxRoomCharge;
    int targetGrade;

    printf("***Print hotels of a given grade in order of charges***\n");
    printf("Enter the grade to filter by: ");
    scanf("%d", &targetGrade);
    printHotelsByGrade(hotels, numHotels, targetGrade);

    printf("***Print hotels with room charges less than a given value***\n");
    printf("Enter the maximum room charge: $");
    scanf("%lf", &maxRoomCharge);
    printHotelsByRoomCharge(hotels, numHotels, maxRoomCharge);

    return 0;
}
