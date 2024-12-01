#include <iostream>

using namespace std;

// Q3

int main()
{
	int yourAge;

	cout << "Enter Your Age to Calc Your Age After 5 Years?" << endl;
	cin >> yourAge;

	cout << "After 5 Years you will be " << yourAge + 5 << " Years old.\n";
	return 0;
}

// Q2

int main()
{
	int firstNumber, secondNumber, thirdNumber;

	cout << "Enter First Number?" << endl;
	cin >> firstNumber;
	cout << "Enter Second Number?" << endl;
	cin >> secondNumber;
	cout << "Enter Third Number?" << endl;
	cin >> thirdNumber;

	int total = firstNumber + secondNumber + thirdNumber;
	cout << firstNumber << " +\n" << secondNumber << " +\n" << thirdNumber << endl << endl;
	cout << "---------------------------------------------------------------------\n\n";
	cout << "Total = " << total << endl;
	return 0;
}

// Q1

int main()
{
	string myName, myCity, myCountry;
	short myAge;
	float monthlySalary;
	char gender;
	bool isMarried;

	cout << "Enter Your Name?" << endl;
	cin >> myName;
	cout << "Enter Your Age?" << endl;
	cin >> myAge;
	cout << "Enter Your City?" << endl;
	cin >> myCity;
	cout << "Enter Your Country?" << endl;
	cin >> myCountry;
	cout << "Enter Your Monthly Salary?" << endl;
	cin >> monthlySalary;
	cout << "Enter Your Gender? M/F" << endl;
	cin >> gender;
	cout << "Are You Married? 1/0" << endl;
	cin >> isMarried;

	float yearlySalary = monthlySalary * 12;
	cout << "************************************************\n";
	cout << "Name: " << myName << ".\n";
	cout << "Age: " << myAge << "Years.\n";
	cout << "City: " << myCity << ".\n";
	cout << "Counrty: " << myCountry << "." << endl;
	cout << "Monthly Salary: " << monthlySalary << ".\n";
	cout << "Yearly Salary: " << yearlySalary << "." << endl;
	cout << "Gender: " << gender << ".\n";
	cout << "Married: " << isMarried << "." << endl;
	cout << "************************************************\n";
	return 0;
}