#include <iostream>
#include <string>

using namespace std;

// -----------------------------------------------

// # 49

// -----------------------------------------------

// Second Solution

void ReadPINData(int &PIN)
{
	cout << "Enter PIN Number? " << endl;
	cin >> PIN;
}

void isValid(int PIN)
{
	if (PIN == 1234) {
		cout << "Your Balance is: 7500\n";
	}
	else {
		cout << "Wrong PIN!\n";
	}
}

int main()
{
	int ATMPin;

	ReadPINData(ATMPin);
	isValid(ATMPin);

	return 0;
}

// First Solution

int main()
{
	int ATMPin;

	cout << "Enter PIN Number? " << endl;
	cin >> ATMPin;

	if (ATMPin == 1234) {
		cout << "Your Balance is: 7500\n";
	}
	else {
		cout << "Wrong PIN!\n";
	}

	return 0;
}

// -----------------------------------------------

// # 24

// -----------------------------------------------

// Second Solution

void ReadAgeData(int &Age)
{
	cout << "Enter Your Age?" << endl;
	cin >> Age;
}

bool isValid(int Age)
{
	if (Age >= 18 && Age <= 45) {
		return true;
	}
	else {
		return false;
	}
}

void PrintIsVaild(bool isValidOr)
{
	if (isValidOr == true)
	{
		cout << "Valid Age!\n";
	}
	else {
		cout << "Invalid Age!\n";
	}
}

int main()
{
	int Age;

	ReadAgeData(Age);
	PrintIsVaild(isValid(Age));

	return 0;
}

// First Solution

int main()
{
	int Age;

	cout << "Enter Your Age?" << endl;
	cin >> Age;

	if (Age >= 18 && Age <= 45) {
		cout << "Valid Age!\n";
	}
	else {
		cout << "Invalid Age!\n";
	}

	return 0;
}

// -----------------------------------------------

// # 11

// -----------------------------------------------

// Second Solution

void ReadGradesData(float Grade[3])
{
	cout << "Enter Your First Grade? \n";
	cin >> Grade[0];

	cout << "Enter Your Second Grade? \n";
	cin >> Grade[1];

	cout << "Enter Your Third Grade? \n";
	cin >> Grade[2];
}

float CalculateAverage(float Grade[3])
{
	return (Grade[0] + Grade[1] + Grade[2]) / 3;
}

bool isPassed(float Grade[3])
{
	if (CalculateAverage(Grade) >= 50) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	float Grade[3];

	ReadGradesData(Grade);
	cout << "Your Average of Grades = " << CalculateAverage(Grade) << endl;

	if (isPassed(Grade) == true) {
		cout << "Congratulations, You Passed!" << endl;
	}
	else {
		cout << "Try Again, You Failed!" << endl;
	}

	return 0;
}

// First Solution

int main()
{
	int Grade[3];

	cout << "Enter Your First Grade? \n";
	cin >> Grade[0];

	cout << "Enter Your Second Grade? \n";
	cin >> Grade[1];

	cout << "Enter Your Third Grade? \n";
	cin >> Grade[2];

	float Avg = (Grade[0] + Grade[1] + Grade[2]) / 3;

	cout << "Your Average of Grades = " << Avg << endl;

	if (Avg >= 50) {
		cout << "Congratulations, You Passed!" << endl;
	}
	else {
		cout << "Try Again, You Failed!" << endl;
	}

	return 0;
}

// -----------------------------------------------

// # 8

// -----------------------------------------------

// Third Solution

bool isPass(int Mark)
{
	if (Mark >= 50) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	int Mark;

	cout << "Enter Your Mark? \n";
	cin >> Mark;

	if (isPass(Mark) == true)
	{
		cout << "Pass" << endl;
	}
	else {
		cout << "Fail";
	}

	return 0;
}

// Second Solution

void isPass(int Mark)
{
	if (Mark >= 50) {
		cout << "Pass" << endl;
	}
	else {
		cout << "Fail";
	}
}

int main()
{
	int Mark;

	cout << "Enter Your Mark? \n";
	cin >> Mark;

	isPass(Mark);

	return 0;
}

// First Solution

int main()
{
	int Mark;

	cout << "Enter Your Mark? \n";
	cin >> Mark;

	if (Mark >= 50) {
		cout << "Pass" << endl;
	}
	else {
		cout << "Fail";
	}

	return 0;
}

// -----------------------------------------------

// # 4

// -----------------------------------------------

// Third Solution

void isHired(int Age, bool HasDriverLicense)
{
	if (Age > 21 && HasDriverLicense == true) {
		cout << "Hired!" << endl;
	}
	else {
		cout << "Rejected!" << endl;
	}
}

int main()
{
	int Age;
	bool HasDriverLicense;

	cout << "Enter Your Age? \n";
	cin >> Age;

	cout << "Has You A Driver License? (True or False) \n";
	cin >> HasDriverLicense;

	isHired(Age, HasDriverLicense);

	return 0;
}

// Second Solution

bool isHired(int Age, bool HasDriverLicense)
{
	if (Age > 21 && HasDriverLicense == true) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	int Age;
	bool HasDriverLicense;

	cout << "Enter Your Age? \n";
	cin >> Age;

	cout << "Has You A Driver License? (True or False) \n";
	cin >> HasDriverLicense;

	if (isHired(Age, HasDriverLicense) == true) {
		cout << "Hired!" << endl;
	}
	else {
		cout << "Rejected!" << endl;
	}

	return 0;
}

// First Solution

int main()
{
	int Age;
	bool HasDriverLicense;

	cout << "Enter Your Age? \n";
	cin >> Age;

	cout << "Has You A Driver License? (True or False) \n";
	cin >> HasDriverLicense;

	if (Age > 21 && HasDriverLicense == true) {
		cout << "Hired!" << endl;
	}
	else {
		cout << "Rejected!" << endl;
	}

	return 0;
}