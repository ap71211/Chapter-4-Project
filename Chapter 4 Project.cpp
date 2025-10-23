// Chapter 4 Projects.cpp : This file contains the main Project for Chapter 4. Branches will be createed from this Project.
// Project 1: Days in a Month. This Program will let the user enter an integer in the range of 1-12 and also ask for the year. Then display the number of days in that month, taking into account leap years for the year. 
//

#include <iostream> 
using namespace std;

int month;
int year;


int main() // Project 1: Days in a Month
{
	cout << " Enter a month (1-12): \n";
	if (!(cin >> month)) return 0;
	cout << "Enter a year: \n";
	if (!(cin >> year)) return 0;

	if (month < 1 || month > 12) {
		cout << "Invalid month. Please enter a number between 1 and 12.\n";
		return 0;
	}



	bool leap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)); // Check for leap year
	if (month == 2) {
		cout << "February has " << (leap ? 29 : 28) << " days in " << year << ". \n"; // Ternary operator to determine days in February
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {

		cout << "This month has 30 days in " << year << ". \n";
	}
	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {

		cout << "This month has 31 days in " << year << ". \n";

	}

	return 0;
}





