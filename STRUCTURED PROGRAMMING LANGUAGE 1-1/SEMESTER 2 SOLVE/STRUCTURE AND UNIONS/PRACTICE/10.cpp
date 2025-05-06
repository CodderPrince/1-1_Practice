#include <bits\stdc++.h>
#include <vector>

using namespace std;

struct hotel
{
    string name;
    string address;
    int grade;
    int roomCharge;
    int numRooms;
};

auto compareHotelsByGrade( hotel &a,  hotel &b)
{
    return a.grade < b.grade;
}

void gradeHotel( vector<hotel> &hotels, int targetGrade)
{
    cout << "\nHotels available with grade: " << targetGrade << endl;

    // Filter hotels by grade
    vector<hotel> filteredHotels;
    for ( hotel &h : hotels)
    {
        if (h.grade == targetGrade)
        {
            filteredHotels.push_back(h);
        }
    }

    // Print filtered hotels
    for ( hotel &h : filteredHotels)
    {
        cout << "Hotel name: " << h.name << endl;
        cout << "Hotel address: " << h.address << endl;
        cout << "Hotel grade: " << h.grade << endl;
        cout << "Hotel room charge: $" << h.roomCharge << endl;
        cout << "Number of rooms: " << h.numRooms << endl << endl;
    }
}

void filterRoom( vector<hotel> &hotels, int maxRoomCharge)
{
    cout << "Hotels available with room charges less than $" << maxRoomCharge << endl;

    // Filter hotels by room charge
    vector<hotel> filteredHotels;
    for ( hotel &h : hotels)
    {
        if (h.roomCharge < maxRoomCharge)
        {
            filteredHotels.push_back(h);
        }
    }

    // Print filtered hotels
    for ( hotel &h : filteredHotels)
    {
        cout << "Hotel name: " << h.name << endl;
        cout << "Hotel address: " << h.address << endl;
        cout << "Hotel grade: " << h.grade << endl;
        cout << "Hotel room charge: $" << h.roomCharge << endl;
        cout << "Number of rooms: " << h.numRooms << endl << endl;
    }
}

int main()
{
    int numHotels;
    cout << "\nEnter the total number of hotels: ";
    cin >> numHotels;

    // Clear the input buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<hotel> hotels(numHotels);
    for (int i = 0; i < numHotels; i++)
    {
        cout << "Enter the details for hotel " << i + 1 << ":" << endl;
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
    }

    int targetGrade;
    cout << "\n**Print hotels of a given grade**\n";
    cout << "Enter the grade to filter by: ";
    cin >> targetGrade;
    gradeHotel(hotels, targetGrade);

    int maxRoomCharge;
    cout << "\n**Print hotels with room charges less than a given value**\n";
    cout << "Enter the maximum room charges: $";
    cin >> maxRoomCharge;
    filterRoom(hotels, maxRoomCharge);

    return 0;
}
