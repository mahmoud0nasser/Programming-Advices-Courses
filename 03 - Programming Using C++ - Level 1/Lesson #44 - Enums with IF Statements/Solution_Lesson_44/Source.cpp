#include <iostream>
#include <string>

using namespace std;

// System Color - Enum

enum enScreenColor {
	Red = 1,
	Blue = 2,
	Green = 3,
	Yellow = 4
};

int main()
{
	cout << "****************************************\n";
	cout << "Please Choose the Number of Your Color?\n";
	cout << "(1) Red\n";
	cout << "(2) Blue\n";
	cout << "(3) Green\n";
	cout << "(4) Yellow\n";
	cout << "****************************************\n";
	cout << "Your Choice? ";

	int c;
	enScreenColor Color;

	cin >> c;

	Color = (enScreenColor) c;

	if (Color == enScreenColor::Red) {
		system("color 4F");
	}
	else if (Color == enScreenColor::Blue) {
		system("color 1F");
	}
	else if (Color == enScreenColor::Green) {
		system("color 2F");
	}
	else if (Color == enScreenColor::Yellow) {
		system("color 6F");
	}
	else {
		system("color 9F");
	}

	return 0;
}


// Country - Enum

enum enCountryChoice {Jordan = 1, Tunisa = 2, Algeria = 3, Oman = 4, Egypt = 5, Iraq = 6, Other = 7};

int main()
{
	cout << "****************************************\n";
	cout << "Please Enter The Number of Your Country? \n";
	cout << "(1) Jordan\n";
	cout << "(2) Tunisa\n";
	cout << "(3) Algeria\n";
	cout << "(4) Oman\n";
	cout << "(5) Egypt\n";
	cout << "(6) Iraq\n";
	cout << "(7) Other\n";
	cout << "****************************************\n\n";
	cout << "Your Choice? ";

	int c;
	enCountryChoice Country;

	cin >> c;

	Country = (enCountryChoice)c;

	if (Country == enCountryChoice::Jordan) {
		cout << "Your Country is Jordan.\n";
	}
	else if (Country == enCountryChoice::Tunisa) {
		cout << "Your Country is Tunisa.\n";
	}
	else if (Country == enCountryChoice::Algeria) {
		cout << "Your Country is Algeria.\n";
	}
	else if (Country == enCountryChoice::Oman) {
		cout << "Your Country is Oman.\n";
	}
	else if (Country == enCountryChoice::Egypt) {
		cout << "Your Country is Egypt.\n";
	}
	else if (Country == enCountryChoice::Iraq) {
		cout << "Your Country is Iraq.\n";
	}
	else {
		cout << "Your Country is Other.\n";
	}

	return 0;
}