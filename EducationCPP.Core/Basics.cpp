#include <iostream>
#include <string>
#include <cmath>

#include "Basics.h"

using namespace std;

void Basics::Syntax()
{
	// Printing output to the console.
	cout << "I am pikachu!";		// cout is used to print the output.
	cout << "I am good!";

	// Output with new line
	cout << "\n\n";					// \n was used to print the next output to new line.
	cout << "I am pikachu!\n";
	cout << "I am in new line\n";

	// endl is also used to create a new line
	cout << "Hey! I am endl command!" << endl;
}

void Basics::Variables()
{
	// Variable declaration with value
	int nNumber = 10;
	cout << nNumber << "\n";

	// Empty variable declaration
	int nEmptyVariable;
	nEmptyVariable = 15;
	cout << nEmptyVariable << "\n";

	// Multiple Variables
	int nOne = 1, nTwo = 2, nThree = 3;
	cout << nOne + nTwo + nThree << "\n";

	// Same value for multiple variables
	nOne = nTwo = nThree = 5;
	cout << nOne + nTwo + nThree << "\n";

	// Constant variable - cannot able to change after assigned.
	const int MINUTES_PER_HOUR = 60;
	cout << MINUTES_PER_HOUR << "\n";
}

void Basics::UserInputs()
{
	int nInput;
	cout << "Type a number: ";

	// cin was used to get the input from the client and assigned it to the variable.
	cin >> nInput;
	cout << "\nEntered number was - " << nInput << "\n";
}

void Basics::DataTypes()
{
	// Integer
	int nNumber = 5;

	// Decimal Numbers
	float fNumber = 1.25;		// float can have 6 or 7 decimal points.
	double dNumber = 1.75;		// double can have 15 decimal points.

	// Character
	char cFirstCharacter = 'M';

	// Boolean
	bool bTrueValue = true;
	bool bFalseValue = false;

	// String
	string strName = "Pikachu";
}

void Basics::Operators()
{
	// Arithmetic Operators
	cout << "Arithmetic Operators:\n\n";
	cout << "5 + 2 = " << 5 + 2 << "\n";
	cout << "5 - 2 = " << 5 - 2 << "\n";
	cout << "5 * 2 = " << 5 * 2 << "\n";
	cout << "5 / 2 = " << 5 / 2 << "\n";
	cout << "5 % 2 = " << 5 % 2 << "\n";
	
	int nNumber = 5;
	cout << "5++ = " << nNumber++ << "\n";

	nNumber = 5;
	cout << "++5 = " << ++nNumber << "\n";

	nNumber = 5;
	cout << "5-- = " << nNumber-- << "\n";

	nNumber = 5;
	cout << "--5 = " << --nNumber << "\n\n\n";

	// Assignment Operator
	cout << "Assignment Operator:\n\n";
	nNumber = 5;

	nNumber += 5;		// It is equivalent to => nNumber = nNumber + 5
	cout << "nNumber += 5; nNumber = " << nNumber << "\n\n\n";

	// Comparison Operator
	cout << "Comparison Operator:\n\n";

	cout << "(5 == 5) = " << (5 == 5) << "\n";
	cout << "(5 != 5) = " << (5 != 5) << "\n";
	cout << "(5 > 5) = " << (5 > 5) << "\n";
	cout << "(5 < 5) = " << (5 < 5) << "\n";
	cout << "(5 >= 5) = " << (5 >= 5) << "\n";
	cout << "(5 <= 5) = " << (5 <= 5) << "\n\n\n";

	// Logical Operator
	cout << "Logical Operator: \n\n";
	cout << "(5 > 5) && (5 > 2) = " << ((5 > 5) && (5 > 2)) << "\n";
	cout << "(5 > 5) || (5 > 2) = " << ((5 > 5) || (5 > 2)) << "\n";
	cout << "(!(5 < 5)) = " << (!(5 < 5)) << "\n";
}

void Basics::Strings()
{
	string strGreeting = "Hello, Pikachu!";

	// Append String
	string strFirstName = "Mani";
	string strLastName = "Raj";
	string strFullName = strFirstName + strLastName;
	cout << strFullName << "\n\n";

	// String Length
	string strAlphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << "The length of the alphabets is (length) - " << strAlphabets.length() << "\n";
	cout << "The length of the alphabets is (size) - " << strAlphabets.size() << "\n\n";

	// Indexing String
	string strHello = "Hello";
	cout << "First letter of Hello is - " << strHello[0] << "\n";
	cout << "Last letter of Hello is - " << strHello[strHello.length() - 1] << "\n";

	strHello[0] = 'J';
	cout << "Hello after changed the first letter - " << strHello << "\n\n";

	// Is the string is empty?
	string strEmpty = "";
	cout << "Is the string is Empty? " << strEmpty.empty() << "\n\n";

	// User Inputs
	string strName;
	cout << "Enter your name (Pika Pikachu): ";
	// cin >> strName;
	cout << "Entered Name (cin used) - " << strName << "\n";

	// Need to use getline to get the space separated string...
	cout << "Enter your name (Pika Pikachu): ";
	getline(cin, strName);
	cout << "Entered Name (cin used) - " << strName << "\n";
}

void Basics::Math()
{
	// Max
	cout << "Max value (10, 20) : " << max(10, 20) << "\n";

	// Min
	cout << "Min value (10, 20) : " << min(10, 20) << "\n";

	// cmath library functions
	cout << "Square root of 64  : " << sqrt(64) << "\n";

	cout << "Round value of 2.4 : " << round(2.4) << "\n";
	cout << "Round value of 2.6 : " << round(2.6) << "\n";

	cout << "Log value of 25    : " << log(25) << "\n";
}

void Basics::ConditionalStatements()
{
	// Normal If Else
	int nAge;

	cout << "Enter your age : ";
	cin >> nAge;

	if (nAge < 0) 
	{
		cout << "Please enter a valid age...\n\n";
	}
	else if (nAge > 50)
	{
		cout << "You are too old...\n\n";
	}
	else
	{
		cout << "You are age between 1 to 50...\n\n";
	}

	// Short hand If Else
	cout << "Short hand if else statement : " << ((nAge > 0) ? "Correct Age..." : "Invalid Age") << "\n";
}

void Basics::LoopingStatements()
{
	int nInitial = 0;

	// While loop
	cout << "While loop - ";

	while (nInitial < 5)
	{
		cout << ++nInitial << " ";
	}

	cout << "\n\n";

	// For loop
	cout << "For loop - ";

	for (int i = 10; i <= 50; i += 10)
	{
		cout << i << " ";
	}

	cout << "\n\n";

	// Foreach loop
	string strName = "Pikachu";

	cout << "Foreach loop - ";

	for (char cLetter : strName)
	{
		cout << cLetter << " ";
	}

	cout << "\n\n";

	// Break and Continue
	cout << "Break and continue., continue 4., break on 8..,\n";

	for (int i = 1; i < 11; i++)
	{
		if (i == 4) continue;

		if (i == 8) break;

		cout << i << " ";
	}

	cout << "\n";
}