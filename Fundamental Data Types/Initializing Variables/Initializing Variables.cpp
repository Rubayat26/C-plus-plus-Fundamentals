// Initializing Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main()
{
	auto price = 99.99;
	auto interestRate = 3.67;
	auto fileSize = 90000L;
	auto letter = 'a';
	auto isValid = false;

	int number { 1 };
	
	//int number2{ 2.7 }; //it would not allow this because it is a double 
	                      //and not an int

	int number3 = 0b11111111; //binary number 
	int number4 = 0xff; //hexadecimal number
	
	std::cout << number3 << std::endl;
	std::cout << number4 << std::endl;
	
	//srand is short for seed random
	//srand(8);  //the srand function sets the starting point for producing 
	                 //a series of pseudo-random integers
	int number5 = rand(); //random number generator
	int number6 = rand();
	std::cout << number5 << std::endl;
	std::cout << number6 << std::endl;
	
	
	
	/*
	for (int i = 0; i < 5; i++)
		cout << rand() << " ";
	*/
	
	
	int minValue = 1;
	int maxValue = 6;
	int range = maxValue - minValue + 1;
	srand(time(0)); //You have to use srand to get a different number each time
	int firstDice = rand() % range + minValue;
	int secondDice = rand() % range + minValue;
	
	cout << firstDice << " " << secondDice << endl;
	
	


	int studentsCPlus = 100;
	int studentsJavaScript = 50;

	cout << left << setw(10) << "Course" << setw(10) << "Students" << endl;
	
	cout << left << setw(10) << "C++" << right << setw(10) << studentsCPlus << endl
		 << left << setw(10) << "JavaScript" << right <<setw(10) << studentsJavaScript << endl;
	
	

	
	

	cout << numeric_limits<int>::max() << endl
		<< numeric_limits<int>::min() << endl;

	cout << numeric_limits<double>::max() << endl;
	
	
	cout << "" << endl
		<< "" << endl;


	bool isNewUser = false;
	cout << isNewUser << endl;
	cout << boolalpha << isNewUser << endl;
	cout << noboolalpha << isNewUser << endl;


	cout << "" << endl
		<< "" << endl;



	cout << "Please enter your address: " << endl;
	string street;
	string city;
	string state;
	string zipCode;

	cout << "Street: ";
	getline(cin, street);
	
	cout << "City: ";
	getline(cin, city);
	
	cout << "State: ";
	getline(cin, state);
	
	cout << "Zip Code: ";
	getline(cin, zipCode);
	
	
	cout << "You live at " << street << " in " << city << ", " << state << " " << zipCode << endl;
	

	string names[3];
	
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter a name: " << endl;
		getline(cin, names[i]);
	}
	
	cout << "First Name is: "<< names[0] << endl;
	
	return 0; 

	
}




