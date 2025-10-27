// Chapter 4 Projects.cpp : This file contains the main Project for Chapter 4. Branches will be createed from this Project.
// Project 2: Write a program that asks for the weight of the package and the distance it is to be shipped, then 
// // calculates the shipping cost based on the rates per 500 miles as follows:
//

#include <iostream> 
#include <iomanip>
#include <cmath>

using namespace std;

int main()

{
	double weight;
	double distance;
	double cost;
	double rate;

	int totalCost; 

	cout << fixed << setprecision(2);
	
	

	cout << "Enter the weight of the package can only be between 0 and 20 kg: ";
	cin >> weight;

	cout << "Enter the distance to be shipped can only be between 0 and 3000 miles: ";
	cin >> distance;
	

	if (weight < 0 || weight > 20)
	{
		cout << "Invalid input. Weight must be between 0 and 20 kg, and distance must be between 0 and 3000 miles." << endl;
		return 0;
	}
	if (distance < 0 || distance > 3000)
	{
		cout << "Invalid input. Weight must be between 0 and 20 kg, and distance must be between 0 and 3000 miles." << endl;
		return 0;
	}


	if (weight <= 2) {
		cost = 1.10;
		
	}
	else if (weight <= 6) {
		cost = 2.20;
	}
	
	else if (weight <= 10) {
		cost = 3.70;
	}
	
	else {
		cost = 4.80;
	}

	totalCost = (ceil(distance / 500));

	rate = cost * totalCost; 

	cout << "The shipping cost is: $" << rate << endl;
	return 0;
}







