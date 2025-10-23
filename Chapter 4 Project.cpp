// Chapter 4 Projects.cpp : This file contains the main Project for Chapter 4. Branches will be createed from this Project.
// Project 2: Write a program that asks for the weight of the package and the distance it is to be shipped, then display the charges.
//

#include <iostream> 
#include <iomanip>
using namespace std;

int main()

{
	double weight = 0.0;
	double distance = 0.0;
	double cost = 0.0;

	cout << "Enter the weight of the package can only be between 0 and 20 kg: ";
	cin >> weight;

	cout << "Enter the distance to be shipped can only be between 0 and 3000 miles: ";
	cin >> distance;

	bool input = (weight <= 0 || weight > 20 || distance <= 0 || distance > 3000);
	if (input)
	{
		cout << "Invalid input. Weight must be between 0 and 20 kg, and distance must be between 0 and 3000 miles." << endl;
		return 0;
	}

	if (weight <= 2) {


		cost = 1.10;
	}
	else if (weight > 2 and weight >= 6) {
		cost = 2.20;
	}
	
	else if (weight > 6 and weight >= 10) {
		cost = 3.70;
	}
	
	else if (weight > 10 and weight <= 20) {
		cost = 4.80;
	}
	
	double totalCost = (distance / 500) * cost;
	cout << fixed << setprecision(2);
	cout << "The shipping cost is: $" << totalCost << endl;
	return 0;
}







