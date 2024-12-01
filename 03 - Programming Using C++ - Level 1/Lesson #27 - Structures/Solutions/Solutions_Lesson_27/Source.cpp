#include <iostream>

using namespace std;

struct stAddress
{
	string Street;
	string POBOX;
};

struct ContactInfo
{
	string email;
	string Phone;
	string FaceBookAccount;
	stAddress Address;
};

struct Person
{
	string Name;
	int Age;
	string City;
	string Country;
	float MonthlySalary;
	float YearlySalary;
	char Gender;
	bool IsMarried;
	ContactInfo contactInfo;
};

int main()
{
	Person Employee;

	Employee.Name = "Mahmoud Nasser";
	Employee.Age = 20;
	Employee.City = "Giza";
	Employee.Country = "Egypt";
	Employee.MonthlySalary = 4500.0;
	Employee.YearlySalary = Employee.MonthlySalary * 12;
	Employee.Gender = 'M';
	Employee.IsMarried = false;
	Employee.contactInfo.Address.Street = "El-Qanater, El-Giza";
	Employee.contactInfo.email = "MahmoudNasser101@gmail.com";
	Employee.contactInfo.Phone = "+20101098209";
	Employee.contactInfo.FaceBookAccount = "MahmoudNasser";
	Employee.contactInfo.Address.POBOX = "101111";

	cout << "**************************************************************\n";
	cout << "| Name             : " << Employee.Name << "\n";
	cout << "| Age              : " << Employee.Age << endl;
	cout << "| City             : " << Employee.City << endl;
	cout << "| Country          : " << Employee.Country << endl;
	cout << "| Monthly Salary   : " << Employee.MonthlySalary << endl;
	cout << "| Yearly Salary    : " << Employee.YearlySalary << endl;
	cout << "| Gender           : " << Employee.Gender << endl;
	cout << "| Is Married       : " << Employee.IsMarried << endl;
	cout << "| Email            : " << Employee.contactInfo.email << endl;
	cout << "| Phone            : " << Employee.contactInfo.Phone << endl;
	cout << "| Facebook Account : " << Employee.contactInfo.FaceBookAccount << endl;
	cout << "| Address          : " << Employee.contactInfo.Address.Street << " - " << Employee.contactInfo.Address.POBOX << endl;
	cout << "***************************************************************\n";

	return 0;
}