// LeapYear.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int LeapYear(int year) {
    if (year % 4 == 0)
        if (year % 100 == 0 && year % 400 == 0)
            return 1;
        else if (year % 100 == 0)
            return 2;
        else
            return 1;
    else
        return 2;
}

int GetMonth(int month, int year) {
    switch (month)
    {
    case 2:
        return (LeapYear(year) == 1) ? 29 : 28;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    default:
        return 31;

    }
}
int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    int month;
    cout << "Enter a month: ";
    cin >> month;
    cout << "Days in this month is: " << GetMonth(month,year);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
