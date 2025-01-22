#include <iostream>
#include <string>

using namespace std;

// -------------------------------------
// Problem_40
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

float TotalBillAfterServiceAndTax(float TotalBill)
{
	TotalBill *= 1.1;
	TotalBill *= 1.16;

	return TotalBill;
}

int main()
{
	float TotalBill = ReadPositiveNumber("Enter Total Bill? ");

	cout << endl;

	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Bill After Service Fee and Sales Tax = " << TotalBillAfterServiceAndTax(TotalBill) << endl;

	return 0;
}

// -------------------------------------
// Problem_39
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

float CalculateRemainder(float TotalBill, float TotalCashPaid)
{
	return TotalCashPaid - TotalBill;
}

int main()
{
	float TotalBill = ReadPositiveNumber("Enter Total Bill? ");
	float TotalCashPaid = ReadPositiveNumber("Enter Total Cash Paid? ");

	cout << endl;

	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Cash Paid = " << TotalCashPaid << endl;

	cout << "********************************\n";

	cout << "Remainder = " << CalculateRemainder(TotalBill, TotalCashPaid) << endl;

	return 0;
}

// -------------------------------------
// Problem_38
//---------------------------------------

enum enPrimeNotPrime {
	Prime = 1,
	NotPrime = 2
};

float ReadPositiveNumber(string Message)
{
	float Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

enPrimeNotPrime CheckPrime(int Number)
{
	int M = round(Number / 2);

	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
			return enPrimeNotPrime::NotPrime;
	}

	return enPrimeNotPrime::Prime;
}

void PrintNumberType(int Number)
{
	switch (CheckPrime(Number))
	{
	case enPrimeNotPrime::Prime:
		cout << "\nThe Number is Prime" << endl;
		break;
	case enPrimeNotPrime::NotPrime:
		cout << "\nThe Number is Not Prime\n";
		break;
	default:
		cout << "Number is not Valid\n";
	}
}

int main()
{
	PrintNumberType(ReadPositiveNumber("Enter a Positive Number"));

	return 0;
}

// -------------------------------------
// Problem_37
//---------------------------------------

int ReadNumber(string Message)
{
	int Number = 0;
	cout << Message << endl;
	cin >> Number;

	return Number;
}

float SumNumbers()
{
	int Sum = 0, Counter = 1, Number = 0;

	do {
		Number = ReadNumber("Enter Number " + to_string(Counter));

		if (Number == -99)
			break;

		Sum += Number;
		Counter++;
	} while (Number != -99);

	return Sum;
}

int main()
{
	cout << endl << "Result = " << SumNumbers() << endl;

	return 0;
}

// -------------------------------------
// Problem_36
//---------------------------------------

enum enOperationType {
	Add = '+',
	Subtract = '-',
	Multiply = '*',
	Divide = '/'
};

float ReadNumber(string Message)
{
	float Number = 0;

	cout << Message << endl;
	cin >> Number;

	return Number;
}

enOperationType ReadOpType()
{
	char OT = '+';

	cout << "Enter Operation Type (+, -, *, /)? \n";
	cin >> OT;

	return (enOperationType)OT;
}

float Calculate(float Number1, float Number2, enOperationType OpType)
{
	switch (OpType)
	{
	case enOperationType::Add:
		return Number1 + Number2;
	case enOperationType::Subtract:
		return Number1 - Number2;
	case enOperationType::Multiply:
		return Number1 * Number2;
	case enOperationType::Divide:
		return Number1 / Number2;
	default:
		return Number1 + Number2;
	}
}

int main()
{
	float Number1 = ReadNumber("Enter The First Number N1?");
	float Number2 = ReadNumber("Enter The Second Number N2?");

	enOperationType OpType = ReadOpType();

	cout << endl << "Result = " << Calculate(Number1, Number2, OpType) << endl;

	return 0;
}