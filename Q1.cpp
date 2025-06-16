// GA2Q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
bool Leapyear(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int daysM(int month, int year)
{
	switch (month) {
	case 2:
		return Leapyear(year) ? 29 : 28;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
		break;
	default:
		return 31;
	}
}
int main(){
	int year, month;
	cout << "Enter a year: ";
	cin >> year;
	cout << "Enter a month: ";
	cin >> month;
	int days = daysM(month, year);
	cout << "days are: " << days << endl;
	int daysY;
	daysY = Leapyear(int year) ? 366 : 365;
	cout << daysY;
	return 0;

}

