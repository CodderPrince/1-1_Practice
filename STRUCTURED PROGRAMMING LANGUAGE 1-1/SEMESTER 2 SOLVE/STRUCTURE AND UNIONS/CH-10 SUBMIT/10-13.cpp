/*
old 10.13 new 11.13         *PRINCE*
10.13 Define a structure that can describe an hotel.
It should have members that include the name, address, grade,
average room charge, and number of rooms.
Write functions to perform the following operations:
• To print out hotels of a given grade in order of charges
• To print out hotels with room charges less than a given value
*/

#include <iostream>
using namespace std;

#define ll long long
#define nl endl

struct hotel
{
    string name;
    string address;
    int grade;
    int roomCharge;
    int numRooms;
};

void gradeHotel(struct hotel hotels[], int numHotels, int targetGrade)
{
    cout << "\nHotels available in this grade: " << targetGrade << nl << nl;
    for (int i = 0; i < numHotels; i++)
    {
        if (hotels[i].grade == targetGrade)
        {
            cout << "Hotel name: " << hotels[i].name << nl;
            cout << "Hotel address: " << hotels[i].address << nl;
            cout << "Hotel grade: " << hotels[i].grade << nl;
            cout << "Hotel Room Charge: $" << hotels[i].roomCharge << nl;
            cout << "Number of rooms: " << hotels[i].numRooms << nl << nl;
        }
    }
}

void filterRoom(struct hotel hotels[], int numHotels, int maxRoomCharge)
{
    cout << "Hotels available with room charges less than $" << maxRoomCharge << nl << nl;
    for (int i = 0; i < numHotels; i++)
    {
        if (hotels[i].roomCharge < maxRoomCharge)
        {
            cout << "Hotel name: " << hotels[i].name << nl;
            cout << "Hotel address: " << hotels[i].address << nl;
            cout << "Hotel grade: " << hotels[i].grade << nl;
            cout << "Hotel Room Charge: $" << hotels[i].roomCharge << nl;
            cout << "Number of rooms: " << hotels[i].numRooms << nl << nl;
        }
    }
}

int main()
{
    int numHotels;
    cout << "\nEnter the total number of hotels: ";
    cin >> numHotels;
    cin.ignore();

    struct hotel hotels[numHotels];
    for (int i = 0; i < numHotels; i++)
    {
        cout << "\nEnter the details for Hotel " << i + 1 << nl;
        cout << "Enter the name of hotel: ";
        getline(cin, hotels[i].name);
        cout << "Enter the hotel address: ";
        getline(cin, hotels[i].address);
        cout << "Enter the hotel grade: ";
        cin >> hotels[i].grade;
        cout << "Enter the hotel room charge: $";
        cin >> hotels[i].roomCharge;
        cout << "Enter the number of rooms: ";
        cin >> hotels[i].numRooms;
        cin.ignore();
    }

    int targetGrade;
    cout << "\n**Print hotels of a given grade**\n";
    cout << "Enter the grade to filter by: ";
    cin >> targetGrade;
    gradeHotel(hotels, numHotels, targetGrade);

    int maxRoomCharge;
    cout << "\n**Print hotels with room charges less than a given value**\n";
    cout << "Enter the maximum room charges: $";
    cin >> maxRoomCharge;
    filterRoom(hotels, numHotels, maxRoomCharge);

    return 0;
}
