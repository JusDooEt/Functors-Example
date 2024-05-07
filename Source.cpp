/*************************************************
* Program    : Using functors
* File       : Source.cpp
* ================================================
* Programmer : Cameron Abo
*************************************************/
#include "FahrToCels.h"
#include "CelsToFahr.h"
#include <iostream>
using namespace std;

template <class T>
void convertTemp(T obj, float temp)
{
	obj.setTemp(temp);
	cout << "Today's high temperature was " << obj();
}

int main()
{
	float temp;
	char choice;
	FahrToCels FtoC;
	CelsToFahr CtoF;

	cout << "A. Convert temperature from Fahrenheit to Celsius\n"
		<< "B. Convert temperature from Celsius to Fahrenheit\n\n"
		<< "Enter A or B:  ";
	cin >> choice;

	if (toupper(choice) == 'A')
	{
		cout << "Enter today's high temperature in Fahrenheit:  ";
		cin >> temp;

		convertTemp(FtoC, temp);		// Pass a FahrToCelsius object
		cout << " Celsius.\n\n";
	}
	else
	{
		cout << "Enter today's temperature in Celsius:  ";
		cin >> temp;

		convertTemp(CtoF, temp);		// Pass a CelsiusToFahr object
		cout << " Fahrenheit.\n\n";
	}
	return 0;
}


/* OUTPUT
A. Convert temperature from Fahrenheit to Celsius
B. Convert temperature from Celsius to Fahrenheit

Enter A or B:  a
Enter today's high temperature in Fahrenheit:  77
Today's high temperature was 25 Celsius.

OR

A. Convert temperature from Fahrenheit to Celsius
B. Convert temperature from Celsius to Fahrenheit

Enter A or B:  b
Enter today's temperature in Celsius:  25
Today's high temperature was 77 Fahrenheit.
*/