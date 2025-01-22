#include <iostream>
#include <string>

using namespace std;

// -------------------------------------
// Problem_50
//---------------------------------------

string ReadPinCode()
{
	string PinCode;

	cout << "Enter PIN Code? \n";
	cin >> PinCode;

	return PinCode;
}

bool Login()
{
	string PINCode;
	int Counter = 3;

	do {
		Counter--;
		PINCode = ReadPinCode();

		if (PINCode == "1234") {
			return 1;
		}
		else {
			system("color 4F"); // turn Screen to Red
			cout << "\nWrong PIN, You have " << Counter << " more tries\n";
		}
	} while (Counter >= 1 && PINCode != "1234");

	return 0; // When You Reach Here this mean Login Failed
}

int main()
{
	if (Login()) {
		system("color 2F"); // turn Screen to Green
		cout << "\nYour Account Balance is " << 7500 << endl;
	}
	else {
		cout << "\nYour Card blocked call the Bank for help.\n";
	}

	return 0;
}

// -------------------------------------
// Problem_49
//---------------------------------------

// ---------------------1st Solution

string ReadPinCode()
{
	string PinCode;

	cout << "Enter PIN Code? " << endl;
	cin >> PinCode;

	return PinCode;
}

bool Login()
{
	string PinCode;

	do {
		PinCode = ReadPinCode();

		if (PinCode == "1234")
		{
			return 1;
		}
		else {
			system("color 4F"); // turn Screen to Red
			cout << "\nWrong PIN" << endl;
		}

	} while (PinCode != "1234");

	return 0;
}

int main()
{
	if (Login()) {
		system("color 2F");
		cout << "\nYour Account Balance is " << 7500 << endl;
	};

	return 0;
}

// --------------- 2nd Solution

string ReadPinCode()
{
	string PinCode;
	
	cout << "Enter PIN Code? " << endl;
	cin >> PinCode;

	return PinCode;
}

bool Login()
{
	string PinCode;

	do {

		PinCode = ReadPinCode();

		if (PinCode == "1234") {
			return 1; // this will exit the function and return true
		}
		else {
			cout << "\nWrong PIN\n";
			system("color 4F"); // turn Screen to Red
		}

	} while (PinCode != "1234");

	return 0;
}

int main()
{
	if (Login())
	{
		system("color 2F");
		cout << "\nYour Account Balance is " << 7500 << endl;
	};

	return 0;
}

// -------------------------------------
// Problem_48
//---------------------------------------

float ReadPositiveNumber(string Message)
{
	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

float MonthlyInstallment(float LoanAmount, float HowManyMonths)
{
	return (float)LoanAmount / HowManyMonths;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Enter Loan Amount? ");
	float HowManyMonths = ReadPositiveNumber("How Many Months? ");

	cout << "\nMonthly Installment = " << MonthlyInstallment(LoanAmount, HowManyMonths) << endl;

	return 0;
}

// -------------------------------------
// Problem_47
//---------------------------------------

float ReadPositiveNumber(string Message)
{
	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

float TotalMonths(float LoanAmount, float MonthlyInstallment)
{
	return (float)LoanAmount / MonthlyInstallment;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Enter Loan Amount? ");
	float MonthlyInstallment = ReadPositiveNumber("Enter Monthly Installment? ");

	cout << "\nTotal Months To Pay = " << TotalMonths(LoanAmount, MonthlyInstallment) << endl;

	return 0;
}

// -------------------------------------
// Problem_46
//---------------------------------------

void PrintLetterAtoZ()
{
	for (int i = 65; i <= 90; i++)
	{
		cout << char(i) << endl;
	}
}

int main()
{
	PrintLetterAtoZ();

	return 0;
}