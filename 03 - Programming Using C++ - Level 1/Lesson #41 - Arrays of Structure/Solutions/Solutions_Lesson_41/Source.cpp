#include <iostream>
#include <string>

using namespace std;

struct stPersonInfo
{
	string FirstName;
	string LastName;
	int Age;
	string Phone;
};

void ReadPersonInfo(stPersonInfo &Info)
{
	cout << "Enter Your First Name? \n";
	cin >> Info.FirstName;

	cout << "Enter Your Last Name? \n";
	cin >> Info.LastName;

	cout << "Enter Your Age? \n";
	cin >> Info.Age;

	cout << "Enter Your phone? \n";
	cin >> Info.Phone;
}

void Read2PersonData(stPersonInfo Persons[2])
{
	ReadPersonInfo(Persons[0]);
	ReadPersonInfo(Persons[1]);
}

void PrintPersinInfo(stPersonInfo Info)
{
	cout << "*******************************************\n";
	cout << "First Name: " << Info.FirstName << endl;
	cout << "Last Name: " << Info.LastName << endl;
	cout << "Age: " << Info.Age << endl;
	cout << "Phone Number: " << Info.Phone << endl;
	cout << "*******************************************\n\n";
}

void Print2PersonData(stPersonInfo Persons[2])
{
	PrintPersinInfo(Persons[0]);
	PrintPersinInfo(Persons[1]);
}

int main()
{
	stPersonInfo Persons[2];

	Read2PersonData(Persons);
	Print2PersonData(Persons);

	return 0;
}