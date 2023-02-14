// ForLoops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	
	int numb;
	int factorialNumber = 1;

	cout << "Enter a number: ";
	cin >> numb;
	
	for (int i = numb; i > 0; i--)
	{
		factorialNumber *= i;
		
	}
	
	cout << "The factorial of " << numb << " is " << factorialNumber << endl;
	

	int numbers[] = { 1,2, 3 };
	
	for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++)
	{
		cout << numbers[i] << endl;
	}



	int scretNumber = 0;
	
	while (scretNumber != 7)
	{
		cout << "Enter a number: ";
		cin >> scretNumber;
	}
	
	

	while (true) {
		cout << "Number: ";
		int number;
		cin >> number;
		if (number >= 1 && number <= 5)
			break; 
			cout << "Error! Enter a number between 1 and 5." << endl;
	} 

	
	int numberOfRows = 0;
	
	cout << "Enter the number of rows: ";
	cin >> numberOfRows;
	
	for (int i = 1; i <= numberOfRows ; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}

