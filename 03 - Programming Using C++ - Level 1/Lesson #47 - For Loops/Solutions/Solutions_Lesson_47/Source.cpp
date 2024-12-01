#include <iostream>
#include <string>

using namespace std;

// Home Work - For Loop

// # 46

int main()
{
	for (int i = 'a'; i <= 'z'; i++) {
		cout << char(i) << " - ";
	}

	cout << "\n******************************************\n";

	for (int i = 'A'; i <= 'Z'; i++) {
		cout << char(i) << " - ";
	}

	cout << endl;

	return 0;
}

// # 32

int ReadNumber()
{
	int Number;
	cin >> Number;
	return Number;
}

int ReadPower()
{
	int Power;
	cout << "Enter Power? \n";
	cin >> Power;
	return Power;
}

void ShowMessageForNumber()
{
	cout << "Enter Number? \n";
}

int fnPower(int Base, int Power)
{
	int result = 1;
	for (int i = 1; i <= Power; i++) {
		result *= Base;
	}
	return result;
}

int main()
{
	ShowMessageForNumber();

	cout << "Your Result is: " << fnPower(ReadNumber(), ReadPower()) << endl;

	return 0;
}

// # 30

void ShowMessage()
{
	cout << "Enter Number? \n";
}

int ReadNumber()
{
	int N;
	cin >> N;
	return N;
}

int GetFactorial(int Fact)
{
	int Result = 1;
	for (int i = Fact; i <= 0; ) {
		cout << "“Factorial Must be Positive Number\n";
		ReadNumber();
	}

	if (Fact == 1) {
		Result = 1;
	}
	else {
		for (int i = Fact; i >= 1; i--) {
			Result *= i;
		}
	}

	return Result;
}

int main()
{
	ShowMessage();

	cout << "Your Result = " << GetFactorial(ReadNumber()) << endl;

	return 0;
}

// # 29

void ShowMessage()
{
	cout << "Enter Number? \n";
}

int ReadNumberFromUser()
{
	int N;
	cin >> N;
	return N;
}

int SumEvenNumber(int N)
{
	int Sum = 0;
	for (int i = 1; i <= N; i++) {
		if (i % 2 == 0) {
			Sum += i;
		}
	}

	/*for (int i = 0; i <= N; i+=2) {
		Sum += i;
	}*/

	return Sum;
}

int main()
{
	ShowMessage();
	
	cout << "Sum Of Even Numbers is: " << SumEvenNumber(ReadNumberFromUser()) << endl;

	return 0;
}

// # 28

int SumOddNumbers(int N) {
	int Sum = 0;
	for (int i = 1; i <= N; i+=2) {
		Sum += i;
	}
	return Sum;
}

int main()
{
	int N;
	// int Sum = 0;

	cout << "Enter Number? " << endl;
	cin >> N;

	/*for (int i = 0; i < N; i++) {
		if (N % 2 == 1) {
			Sum += i;
		}
	}

	cout << "Sum Of Odd Numbers = " << Sum << endl;
	*/

	cout << "Sum Of Odd Numbers = " << SumOddNumbers(N) << endl;

	return 0;
}

// # 27

int main()
{
	for (int i = 10; i >= 1; i--) {
		cout << i << endl;
	}

	return 0;
}

// # 26

int main()
{
	for (int i = 1; i <= 10; i++) {
		cout << i << endl;
	}

	return 0;
}