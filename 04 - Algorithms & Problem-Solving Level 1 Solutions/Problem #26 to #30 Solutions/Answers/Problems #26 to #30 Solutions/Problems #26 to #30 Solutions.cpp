#include <iostream>
#include <string>

using namespace std;

// -------------------------------------
// Problem_30
//---------------------------------------

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

int Factorial(int N)
{
	int F = 1;
	
	for (int Counter = N; Counter >= 1; Counter--)
	{
		F *= Counter;
	}

	return F;
}

int main()
{
	cout << Factorial(ReadPositiveNumber("Enter N?")) << endl;

	return 0;
}

// -------------------------------------
// Problem_29
//---------------------------------------

enum enOddOrEven {
	Odd = 1,
	Even = 2
};

int ReadNumber()
{
	int Number;

	cout << "Enter a Number N? \n";
	cin >> Number;

	return Number;
}

enOddOrEven CheckOddOrEven(int N)
{
	if (N % 2 != 0)
		return enOddOrEven::Odd;
	else
		return enOddOrEven::Even;
}

int SumEvenNumbersFrom1ToN_UsingFor(int N)
{
	int Sum = 0;

	cout << "\nSum Even Numbers using While Statement: \n";

	for (int Counter = 1; Counter <= N; Counter++) {
		if (CheckOddOrEven(Counter) == enOddOrEven::Even)
			Sum += Counter;
	}

	return Sum;
}

int SumEvenNumbersFrom1ToN_UsingWhile(int N)
{
	int Sum = 0, Counter = 1;

	cout << "\nSum Even Numbers using While Statement: \n";

	while (Counter <= N) {
		if (CheckOddOrEven(Counter) == enOddOrEven::Even)
			Sum += Counter;
		Counter++;
	}

	return Sum;
}

int SumEvenNumbersFrom1ToN_UsingDoWhile(int N)
{
	int Sum = 0, Counter = 1;

	cout << "\nSum Even Numbers using While Statement: \n";

	do {
		if (CheckOddOrEven(Counter) == enOddOrEven::Even)
			Sum += Counter;
		Counter++;
	} while (Counter <= N);

	return Sum;
}

int main()
{
	int N = ReadNumber();

	cout << to_string(SumEvenNumbersFrom1ToN_UsingFor(N)) << endl;
	cout << to_string(SumEvenNumbersFrom1ToN_UsingWhile(N)) << endl;
	cout << to_string(SumEvenNumbersFrom1ToN_UsingDoWhile(N)) << endl;

	return 0;
}

// -------------------------------------
// Problem_28
//---------------------------------------

enum enOddOrEven {
	Odd = 1,
	Even = 2
};

int ReadNumber()
{
	int Number;

	cout << "Enter a Number N? \n";
	cin >> Number;

	return Number;
}

enOddOrEven CheckOddOrEven(int N)
{
	if (N % 2 != 0)
		return enOddOrEven::Odd;
	else
		return enOddOrEven::Even;
}

int SumOddNumbersFrom1ToN_UsingFor(int N)
{
	int Sum = 0;

	cout << "\nSum Odd Numbers using While Statement: \n";

	for (int Counter = 1; Counter <= N; Counter++) {
		if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
			Sum += Counter;
	}

	return Sum;
}

int SumOddNumbersFrom1ToN_UsingWhile(int N)
{
	int Sum = 0, Counter = 1;

	cout << "\nSum Odd Numbers using While Statement: \n";

	while (Counter <= N) {
		if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
			Sum += Counter;
		Counter++;
	}

	return Sum;
}

int SumOddNumbersFrom1ToN_UsingDoWhile(int N)
{
	int Sum = 0, Counter = 1;

	cout << "\nSum Odd Numbers using While Statement: \n";

	do {
		if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
			Sum += Counter;
		Counter++;
	} while (Counter <= N);

	return Sum;
}

int main()
{
	int N = ReadNumber();

	cout << "Sum Of Odd Numbers is: " << to_string(SumOddNumbersFrom1ToN_UsingFor(N)) << endl;
	cout << "Sum Of Odd Numbers is: " << to_string(SumOddNumbersFrom1ToN_UsingWhile(N)) << endl;
	cout << "Sum Of Odd Numbers is: " << to_string(SumOddNumbersFrom1ToN_UsingDoWhile(N)) << endl;

	return 0;
}

// -------------------------------------
// Problem_27
//---------------------------------------

int ReadNumber()
{
	int Number;

	cout << "Enter Number N? \n";
	cin >> Number;

	return Number;
}

void PrintRangeFromNTo1_UsingFor(int N)
{
	cout << "Range printed using For Loop Statement: \n";

	for (int Counter = N; Counter >= 1; Counter--) {
		cout << Counter << endl;
	}
}

void PrintRangeFromNTo1_UsingWhile(int N)
{
	int Counter = N;

	cout << "Range printed using While Statement: \n";

	while (Counter >= 1) {
		cout << Counter << endl;
		Counter--;
	}
}

void PrintRangeFromNTo1_UsingDoWhile(int N)
{
	int Counter = N;

	cout << "Range printed using Do...While Statement: \n";

	do {
		cout << Counter << endl;
		Counter--;
	} while (Counter >= 1);
}

int main()
{
	int N = ReadNumber();

	PrintRangeFromNTo1_UsingFor(N);
	PrintRangeFromNTo1_UsingWhile(N);
	PrintRangeFromNTo1_UsingDoWhile(N);

	return 0;
}

// -------------------------------------
// Problem_26
//---------------------------------------

int ReadNumber()
{
	int Number;

	cout << "Enter Number N? \n";
	cin >> Number;

	return Number;
}

void PrintRangeFrom1ToN_UsingFor(int N)
{
	cout << "Range printed using For Loop Statement: \n";

	for (int Counter = 1; Counter <= N; Counter++) {
		cout << Counter << endl;
	}
}

void PrintRangeFrom1ToN_UsingWhile(int N)
{
	int Counter = 1;

	cout << "Range printed using While Statement: \n";

	while (Counter <= N) {
		cout << Counter << endl;
		Counter++;
	}
}

void PrintRangeFrom1ToN_UsingDoWhile(int N)
{
	int Counter = 1;

	cout << "Range printed using Do...While Statement: \n";

	do {
		cout << Counter << endl;
		Counter++;
	} while (Counter <= N);
}

int main()
{
	int N = ReadNumber();

	PrintRangeFrom1ToN_UsingFor(N);
	PrintRangeFrom1ToN_UsingWhile(N);
	PrintRangeFrom1ToN_UsingDoWhile(N);

	return 0;
}