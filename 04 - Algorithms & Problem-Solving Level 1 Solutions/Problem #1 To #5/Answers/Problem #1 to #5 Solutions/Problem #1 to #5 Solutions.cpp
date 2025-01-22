#include <iostream>
#include <string>

using namespace std;

// Problem_5

struct stInfo
{
	int Age;
	bool HasDrivingLicense;
	bool HasRecommendation;
};

stInfo ReadInfo()
{
	stInfo Info;

	cout << "Please Enter Your Age? \n";
	cin >> Info.Age;

	cout << "Do You Have Driving License? \n";
	cin >> Info.HasDrivingLicense;

	cout << "Do You Have Recommendation? \n";
	cin >> Info.HasRecommendation;

	return Info;
}

bool isAccepted(stInfo Info)
{
	if (Info.HasRecommendation)
		return true;
	else
		return (Info.Age > 21 && Info.HasDrivingLicense);
}

void PrintResult(stInfo Info)
{
	if (isAccepted(Info))
		cout << "\nHired!" << endl;
	else
		cout << "\nRejected!" << endl;
}

int main()
{
	PrintResult(ReadInfo());

	return 0;
}

// Problem_4

struct stInfo
{
	int Age;
	bool HasDrivingLicense;
};

stInfo ReadInfo()
{
	stInfo Info;

	cout << "Please Enter Your Age? \n";
	cin >> Info.Age;

	cout << "Do You Have Driving License? \n";
	cin >> Info.HasDrivingLicense;

	return Info;
}

bool isAccepted(stInfo Info)
{
	return (Info.Age > 21 && Info.HasDrivingLicense);
}

void PrintResult(stInfo Info)
{
	if (isAccepted(Info))
		cout << "\nHired!" << endl;
	else
		cout << "\nRejected!" << endl;
}

int main()
{
	PrintResult(ReadInfo());

	return 0;
}

// Problem_3

enum enNumberType {Odd = 1, Even = 2};

int ReadNumber()
{
	int Num;

	cout << "Enter a Number? " << endl;
	cin >> Num;
	return Num;
}

enNumberType CheckNumberType(int Num)
{
	int Result = Num % 2;
	if (Result == 0)
		return enNumberType::Even;
	else
		return enNumberType::Odd;
}

void PrintNumberType(enNumberType NumberType)
{
	if (NumberType == enNumberType::Even)
		cout << "\nNumber is Even. \n";
	else
		cout << "\nNumber is Odd. \n";
}

int main()
{
	PrintNumberType(CheckNumberType(ReadNumber()));

	return 0;
}

// Problem_2

string ReadName()
{
	string Name;
	cout << "Enter Your Name? \n";
	getline(cin, Name);

	return Name;
}

void PrintName(string Name)
{
	cout << "\nYour Name is: " << Name << endl;
}

int main()
{
	PrintName(ReadName());

	return 0;
}


// # Problem_1

void PrintName(string Name)
{
	cout << "\nYour Name is: " << Name << endl;
}

int main()
{
	PrintName("Mahmoud");

	return 0;
}