// Chapter 4 Projects.cpp : This file contains the main Project for Chapter 4. Branches will be createed from this Project.
// Project 3: This program will contain a geometry calculator that can compute the area of a few shapes. 
// The program will dipsplay a menu and the program will be using switch statements to select the desired shape. 


#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std;

int main()

{
	double radius = 0;
	double length;
	double width;
	double base;
	double height = 0.0;
	double area; 
	int choice;

	cout << fixed << setprecision(2);
	cout << "Geometry Calculator\n";
	cout << endl;
	cout << "1. Calculate the Area of a Circle\n";
	cout << endl;
	cout << "2. Calculate the Area of a Rectangle\n";
	cout << endl;
	cout << "3. Calculate the Area of a Triangle\n";
	cout << endl;
	cout << "4. Quit\n";
	cout << endl;
	cout << "Please enter your choice (1-4): ";
	cin >> choice;
	cout << endl;

	
	switch (choice)
	{
	case 1:
		cout << "Enter the radius of the circle: ";
		cin >> radius;
		if (radius < 0)
		{
			cout << " Radius cannot be negative. Please run the program again and enter a valid radius. \n";
			return 0;
		}
		else if (radius >= 0); {

			area = 3.14159 * pow(radius, 2);
			cout << "The area of the circle is " << area << endl;
		}
		break;

	case 2:
		cout << "Enter the length of the rectangle: ";
		cin >> length;
		cout << "Enter the width of the rectangle: ";
		cin >> width;
		if (length < 0 || width < 0)
		{
			cout << " Length and width cannot be negative. Please run the program again and enter valid numbers. \n";
			return 0;
		}
		else if (length >= 0 || width >= 0); {


			area = length * width;
			cout << "The area of the rectangle is " << area << endl;
		}
		break;
	case 3:
		cout << " Enter the length of the traingle's base: ";
		cin >> base;
		cout << " Enter the height of the traingle: ";
		cin >> height;
		if (base < 0 || height < 0)
		{
			cout << " Base and height cannot be negative. Please run the program again and enter valid numbers. \n";
			return 0;
		}
		else if (base >= 0 || height >= 0); {
			area = base * height * 0.5;
			cout << " The area of the triangle is " << area << endl;
		}
		break;
	case 4:
		cout << " Thank you for using the Geometry Calculator. Goodbye!" << endl;

		break;
	default:
		if (choice < 1 || choice > 4)
		{
			cout << " Invalid choice. Please run the program again and select a valid option (1-4).\n";
		}
	}


	return 0;
}







