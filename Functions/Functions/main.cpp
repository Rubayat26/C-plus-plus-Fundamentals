// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include "maximum.h"
#include "greet.h"


using namespace std;


extern int p; // this is how we declare an external variable




int main()
{
	
	std::cout << "C++ version: " << __cplusplus << '\n';
	cout << maximum(10, 20);
	cout << " " << endl;
	cout << p << endl;
	greet("Rubayat");
	
}




