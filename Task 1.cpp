/*
Name: Rabia Malik
Roll no: Bsef20a023
Section: Afternoon
*/

#include <iostream>

using namespace std;

int main()
{
   int hotelfloors,
noOfrooms,
occupiedrooms = 0,
unoccupied = 0;
float perOfoccupiedrooms,
occupancy;
cout << "How many floors the hotel has\n";
cin >> hotelfloors;
cout << "How many rooms are on floor\n";
cin >> noOfrooms;
while (hotelfloors < 1 && noOfrooms < 10)
{
cout << "Error! Enter valid number\n";
cout << "Enter a number for floor that is not less than 1\n";
cout << "Emter a number for rooms that is not less than 10\n";
cin.ignore(1230, '\n');
}
if (hotelfloors == 13)
{
    cout<<"Skip 13th floor\n";
}
else
{
cout << "How many rooms are occupied\n";
cout << occupiedrooms;
cout << "How many rooms are unoccupied\n";
cout<< unoccupied;
}
perOfoccupiedrooms = occupiedrooms / noOfrooms;
cout << "Percentage of occupied rooms is" << perOfoccupiedrooms;
occupancy = occupiedrooms / noOfrooms * 100;
cout << "Occupancy rate is";
cout << occupancy;

    return 0;
}
