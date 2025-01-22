#include <iostream>
#include <string>

using namespace std;

// -------------------------------------
// Problem_35
//---------------------------------------

struct stPiggyBankContent
{
	int Pennies, Nickles, Dimes, Quarters, Dollers;
};

stPiggyBankContent ReadPiggyBankContent()
{
	stPiggyBankContent PiggyBankContent;

	cout << "Please Enter a Total Pennies? " << endl;
	cin >> PiggyBankContent.Pennies;

	cout << "Please Enter a Total Nickles? " << endl;
	cin >> PiggyBankContent.Nickles;

	cout << "Please Enter a Total Dimes? " << endl;
	cin >> PiggyBankContent.Dimes;

	cout << "Please Enter a Total Quarters? " << endl;
	cin >> PiggyBankContent.Quarters;

	cout << "Please Enter a Total Dollers? " << endl;
	cin >> PiggyBankContent.Dollers;

	return PiggyBankContent;
}

int CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
	int TotalPennies = 0;

	TotalPennies = PiggyBankContent.Pennies * 1 + PiggyBankContent.Nickles * 5 + PiggyBankContent.Dimes * 10 + PiggyBankContent.Quarters * 25 + PiggyBankContent.Dollers * 100;

	return TotalPennies;
}

int main()
{
	int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());

	cout << "\nTotal Pennies = " << TotalPennies << endl;
	cout << endl << "Total Dollers = " << (float)TotalPennies / 100 << endl;

	return 0;
}

// -------------------------------------
// Problem_34
//---------------------------------------

int ReadTotalSales()
{
	int TotalSales;

	cout << "Enter a Total Sales? " << endl;
	cin >> TotalSales;

	return TotalSales;
}

float GetComissionPercentage(float TotalSales)
{
	if (TotalSales >= 1000000)
		return 0.01;
	else if (TotalSales >= 500000)
		return	0.02;
	else if (TotalSales >= 100000)
		return 0.03;
	else if (TotalSales >= 50000)
		return 0.05;
	else
		return 0.00;
}

float CalculateTotalComission(float TotalSales)
{
	return GetComissionPercentage(TotalSales) * TotalSales;
}

int main()
{
	float TotalSales = ReadTotalSales();

	cout << endl << "Comission Percentage = " << GetComissionPercentage(TotalSales) << endl;
	cout << endl << "Total Comission = " << CalculateTotalComission(TotalSales) << endl;

	return 0;
}

// -------------------------------------
// Problem_33
//---------------------------------------

int ReadNumberInRange(int From, int To)
{
	int Grade;

	do {
		cout << "Enter a Grade Between " << From << " and " << To << "?" << endl;
		cin >> Grade;
	} while (Grade < From || Grade > To);

	return Grade;
}

char GetGradeLetter(int Grade)
{
	if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C';
	else if (Grade >= 60)
		return 'D';
	else if (Grade >= 50)
		return 'E';
	else
		return 'F';
}

int main()
{
	cout << "\nResult = " << GetGradeLetter(ReadNumberInRange(0, 100)) << endl;

	return 0;
}

// -------------------------------------
// Problem_32
//---------------------------------------

int ReadNumber()
{
	int Number;

	cout << "Enter a Number? \n";
	cin >> Number;

	return Number;
}

int ReadPower()
{
	int Power;

	cout << "Enter The Power Of Number? \n";
	cin >> Power;

	return Power;
}

int PowerOfM(int Number, int M)
{
	if (M == 0)
		// any Number Powered to Zero gives One
		return 1;
	
	int P = 1;

	for (int i = 0; i <= M; i++)
		P *= Number;

	return P;
}

int main()
{
	cout << "\nThe Result is: " << PowerOfM(ReadNumber(), ReadPower()) << endl;

	return 0;
}

// -------------------------------------
// Problem_31
//---------------------------------------

int ReadNumber()
{
	int Number;

	cout << "Enter a Number N? \n";
	cin >> Number;

	return Number;
}

void PowerOf2_3_4(int Number)
{
	int a, b, c;

	a = Number * Number;
	b = a * Number;
	c = b * Number;

	cout << a << " " << b << " " << c << endl;
}

int main()
{
	PowerOf2_3_4(ReadNumber());

	return 0;
}