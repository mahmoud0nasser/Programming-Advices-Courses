#include <iostream>
#include <string>

using namespace std;

// Home Work - Function Structures

enum enGendor {
	Male,
	Female
};

enum enMaritalStatus
{
	Single,
	Married
};

struct strPersonInfo
{
	string Name;
	int Age;
	string City;
	string Country;
	float MonthlySalary;
	float YearlySalary;
	enGendor Gendor;
	enMaritalStatus Status;
};

void ReadInfo(strPersonInfo& Info)
{
	cout << "Enter Your Age?" << endl;
	cin >> Info.Age;

	cout << "Enter Your Name?" << endl;
	cin.ignore(1, '\n');
	getline(cin, Info.Name);

	cout << "Enter Your City?" << endl;
	cin >> Info.City;

	cout << "Enter Your Country?" << endl;
	cin >> Info.Country;

	cout << "Enter Your Monthly Salary?" << endl;
	cin >> Info.MonthlySalary;

	Info.YearlySalary = Info.MonthlySalary * 12;

	Info.Gendor = enGendor::Male;
	Info.Status = enMaritalStatus::Single;
}

void PrintInfo(strPersonInfo Info)
{
	cout << "********************************************\n";
	cout << "Name: " << Info.Name << endl;
	cout << "Age: " << Info.Age << endl;
	cout << "City: " << Info.City << endl;
	cout << "Country: " << Info.Country << endl;
	cout << "Monthly Salary: " << Info.MonthlySalary << endl;
	cout << "Yearly Salary: " << Info.YearlySalary << endl;
	cout << "Gender: " << to_string(Info.Gendor) << endl;
	cout << "Marital Status: " << to_string(Info.Status) << endl;
	cout << "***********************************************\n";
}

int main()
{
	strPersonInfo PersonInfo;

	ReadInfo(PersonInfo);
	PrintInfo(PersonInfo);

	return 0;
}