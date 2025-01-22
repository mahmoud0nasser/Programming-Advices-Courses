#include <iostream>
#include <string>

using namespace std;

// -------------------------------------
// Problem_10
//---------------------------------------

void ReadNumbers(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "Enter Your Mark 1? \n";
	cin >> Mark1;

	cout << "Enter Your Mark 2? \n";
	cin >> Mark2;

	cout << "Enter Your Mark 3? \n";
	cin >> Mark3;
}

int SumOf3Numbers(int Mark1, int Mark2, int Mark3)
{
	return Mark1 + Mark2 + Mark3;
}

float CalculateAverageOf3Numbers(int Mark1, int Mark2, int Mark3)
{
	return (float)SumOf3Numbers(Mark1, Mark2, Mark3) / 3;
}

void PrintResult(float Average)
{
	cout << "The Total Average of Marks is: " << Average << endl;
}

int main()
{
	int Mark1, Mark2, Mark3;

	ReadNumbers(Mark1, Mark2, Mark3);
	PrintResult(CalculateAverageOf3Numbers(Mark1, Mark2, Mark3));

	return 0;
}

// -------------------------------------
// Problem_9
//---------------------------------------

// ------------------using Call by ref && By Val-----------------------------

void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
	cout << "Enter Number 1? \n";
	cin >> Num1;

	cout << "Enter Number 2? \n";
	cin >> Num2;

	cout << "Enter Number 3? \n";
	cin >> Num3;
}

int SumOf3Numbers(int Num1, int Num2, int Num3)
{
	return Num1 + Num2 + Num3;
}

void PrintResult(int Total)
{
	cout << "The Total Sum of Numbers: " << Total << endl;
}

int main()
{
	int Num1, Num2, Num3;

	ReadNumbers(Num1, Num2, Num3);
	PrintResult(SumOf3Numbers(Num1, Num2, Num3));

	return 0;
}

// -----------------------using Struct-----------------------

struct stSumNumber
{
	int Num1;
	int Num2;
	int Num3;
};

stSumNumber ReadNumbers()
{
	stSumNumber Numbers;

	cout << "Enter The First Number? \n";
	cin >> Numbers.Num1;

	cout << "Enter The Second Number? \n";
	cin >> Numbers.Num2;

	cout << "Enter The Third Number? \n";
	cin >> Numbers.Num3;

	return Numbers;
}

int CalculateSumOfNumbers(stSumNumber Numbers)
{
	return Numbers.Num1 + Numbers.Num2 + Numbers.Num3;
}

void PrintResult(stSumNumber Numbers)
{
	string Result = "Sum Of All Numbers is: " + to_string(CalculateSumOfNumbers(Numbers));
	cout << Result << endl;
}

int main()
{
	PrintResult(ReadNumbers());

	return 0;
}

// -------------------------------------
// Problem_8
//---------------------------------------

enum enPassFail {Pass = 1, Fail = 2};

int ReadMark()
{
	int Mark;

	cout << "Enter Your Mark? \n";
	cin >> Mark;

	return Mark;
}

enPassFail CheckMark(int Mark)
{
	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResult(int Mark)
{
	if (CheckMark(Mark) == enPassFail::Pass)
		cout << "\nYou Passed" << endl;
	else
		cout << "\nYou Failed" << endl;

}

int main()
{
	PrintResult(ReadMark());

	return 0;
}

// -------------------------------------
// Problem_7
//---------------------------------------

int ReadNumber()
{
	int Number;

	cout << "Enter a Number? \n";
	cin >> Number;

	return Number;
}

float CalculateHalfNumber(int Num)
{
	return (float) Num / 2;
}

void PrintResults(int Num)
{
	string Result = "Half of " + to_string(Num) + " is " + to_string(CalculateHalfNumber(Num));

	cout << endl << Result << endl;
}

int main()
{
	PrintResults(ReadNumber());

	return 0;
}

// -------------------------------------
// Problem_6
//---------------------------------------

// -------------------------------------Reversed FullName------------------------------

struct stInfo
{
	string FirstName;
	string LastName;
	bool Reversed;
};

stInfo ReadInfo()
{
	stInfo Info;

	cout << "Please Enter Your First Name? \n";
	cin >> Info.FirstName;

	cout << "Please Enter Your Last Name? \n";
	cin >> Info.LastName;

	cout << "Do Full Name Reversed? \n";
	cin >> Info.Reversed;

	return Info;
}

string GetFullName(stInfo Info)
{
	string FullName = "";

	if(Info.Reversed)
		FullName = Info.LastName + " " + Info.FirstName;
	else
		FullName = Info.FirstName + " " + Info.LastName;

	return FullName;
}

void PrintFullName(string FullName)
{
	cout << "\nYour Full Name is: " << FullName << endl;
}

int main()
{
	PrintFullName(GetFullName(ReadInfo()));

	return 0;
}


// -----------------------Normal FullName------------------------------

struct stInfo
{
	string FirstName;
	string LastName;
};

stInfo ReadInfo()
{
	stInfo Info;

	cout << "Please Enter Your First Name? \n";
	cin >> Info.FirstName;

	cout << "Please Enter Your Last Name? \n";
	cin >> Info.LastName;

	return Info;
}

string GetFullName(stInfo Info)
{
	string FullName = "";

	FullName = Info.FirstName + " " + Info.LastName;
	return FullName;
}

void PrintFullName(string FullName)
{
	cout << "\nYour Full Name is: " << FullName << endl;
}

int main()
{
	PrintFullName(GetFullName(ReadInfo()));

	return 0;
}