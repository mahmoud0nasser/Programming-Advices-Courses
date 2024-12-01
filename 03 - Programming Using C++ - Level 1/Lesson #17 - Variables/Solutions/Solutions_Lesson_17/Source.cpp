#include <iostream>

using namespace std;

// Q3

int main()
{
	int YourAge = 25;
	cout << "After 5 Years you will be " << YourAge + 5 << " Years old.\n";

	return 0;
}

// Q2

int main()
{
	int firstNumber = 20, secondNumber = 30, thirdNumber = 10, total = firstNumber + secondNumber + thirdNumber;
	cout << firstNumber << " +\n" << secondNumber << " +\n" << thirdNumber << endl << endl;
	cout << "---------------------------------------------------------------------\n\n";
	cout << "Total = " << total << endl;

	return 0;
}

// Q1

int main()
{
	string myName = "Mahmoud Nasser", myCity = "Giza", myCountry = "Egypt";
	int myAge = 20;
	float monthlySalary = 5000, yearlySalary = monthlySalary * 12;
	char gender = 'M';
	bool married = true;
	cout << "************************************************\n";
	cout << "Name: " << myName << ".\n";
	cout << "Age: " << myAge << "Years.\n";
	cout << "City: " << myCity << ".\n";
	cout << "Counrty: " << myCountry << "." << endl;
	cout << "Monthly Salary: " << monthlySalary << ".\n";
	cout << "Yearly Salary: " << yearlySalary << "." << endl;
	cout << "Gender: " << gender << ".\n";
	cout << "Married: " << int(married) << "." << endl;
	cout << "************************************************\n";

	return 0;
}