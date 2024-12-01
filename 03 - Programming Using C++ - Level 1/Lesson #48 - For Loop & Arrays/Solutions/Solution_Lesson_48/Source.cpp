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

void ReadPersonInfo(stPersonInfo &Person)
{
	cout << "Enter Your First Name? \n";
	cin >> Person.FirstName;
	
	cout << "Enter Your Last Name? \n";
	cin >> Person.LastName;
	
	cout << "Enter Your Age? \n";
	cin >> Person.Age;
	
	cout << "Enter Your phone? \n";
	cin >> Person.Phone;
}

void ReadPersonData(stPersonInfo Persons[100], int &Length)
{
	cout << "How Many Persons that You Print Cards For them? \n";
	cin >> Length;

	for (int i = 0; i <= Length - 1; i++) {
		cout << "Please Enter Person's " << i + 1 << " Info:\n";
		ReadPersonInfo(Persons[i]);
	}
	
}

void PrintPersonInfo(stPersonInfo Person)
{
	cout << "*******************************************\n";
	cout << "First Name: " << Person.FirstName << endl;
	cout << "Last Name: " << Person.LastName << endl;
	cout << "Age: " << Person.Age << endl;
	cout << "Phone Number: " << Person.Phone << endl;
	cout << "*******************************************\n\n";
}

void PrintPersonData(stPersonInfo Persons[100], int Length)
{
	for (int i = 0; i < Length; i++) {
		cout << "Person's " << i + 1 << " Info:\n\n";
		PrintPersonInfo(Persons[i]);
	}
}

int main()
{
	stPersonInfo Persons[100];
	int Length = 1;

	/*cout << "Enter Length Of Person Cards? \n";
	cin >> Length;*/

	ReadPersonData(Persons, Length);
	PrintPersonData(Persons, Length);

	return 0;
}