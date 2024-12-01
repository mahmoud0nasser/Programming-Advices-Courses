#include <iostream>
#include <string>

using namespace std;

// Country - (Enum - Functions - SwitchCase)

enum enCountryChoice {Jordan = 1, Tunisa = 2, Algeria = 3, Oman = 4, Egypt = 5, Iraq = 6, Other = 7};

void ShowCountryOnScreen()
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
}

enCountryChoice ReadCountry()
{
	int c;

	cin >> c;

	return (enCountryChoice)c;
}

string GetCountry(enCountryChoice Country)
{
	switch (Country)
	{
	case enCountryChoice::Jordan:
		return "Jordan";
		break;
	case enCountryChoice::Tunisa:
		return "Tunisa";
		break;
	case enCountryChoice::Algeria:
		return "Algeria";
		break;
	case enCountryChoice::Oman:
		return "Oman";
		break;
	case enCountryChoice::Egypt:
		return "Egypt";
		break;
	case enCountryChoice::Iraq:
		return "Iraq";
		break;
	default:
		return "Other";
		break;
	}
}

int main()
{
	ShowCountryOnScreen();

	cout << "Your Country is " << GetCountry(ReadCountry()) << endl;
	
	return 0;
}

// System Color - (Enum - Functions - SwitchCase)

enum enScreenColor {
	Red = 1,
	Blue = 2,
	Green = 3,
	Yellow = 4
};

void ShowColorOnScreen()
{
	cout << "****************************************\n";
	cout << "Please Choose the Number of Your Color?\n";
	cout << "(1) Red\n";
	cout << "(2) Blue\n";
	cout << "(3) Green\n";
	cout << "(4) Yellow\n";
	cout << "****************************************\n";
	cout << "Your Choice? ";
}

enScreenColor ReadColor()
{
	int c;

	cin >> c;

	return (enScreenColor)c;
}

void GetColor(enScreenColor Color)
{
	switch (Color)
	{
	case enScreenColor::Red:
		system("color 4F");
		break;
	case enScreenColor::Blue:
		system("color 1F");
		break;
	case enScreenColor::Green:
		system("color 2F");
		break;
	case enScreenColor::Yellow:
		system("color 6F");
		break;
	default:
		system("color 9F");
		break;
	}
}

int main()
{
	ShowColorOnScreen();

	GetColor(ReadColor());

	return 0;
}

// Show Week Days (Enum - Functions - SwitchCase)

enum enWeekDay {
	Sun = 1,
	Mon = 2,
	Tue = 3,
	Wed = 4,
	Thu = 5,
	Fri = 6,
	Sat = 7
};

void ShowWeekDayMenu()
{
	cout << "**********************************************\n";
	cout << "                   Week Days                  \n";
	cout << "**********************************************\n";
	cout << "1: Sunday\n";
	cout << "2: Monday\n";
	cout << "3: Tuesday\n";
	cout << "4: Wednesday\n";
	cout << "5: Thursday\n";
	cout << "6: Friday\n";
	cout << "7: Saturday\n";
	cout << "**********************************************\n";
	cout << "Please Enter The Number of day? " << endl;
}

enWeekDay ReadWeekDay()
{
	int day;

	cin >> day;

	return (enWeekDay)day;
}

string GetWeekDayName(enWeekDay WeekDay) {
	switch (WeekDay)
	{
	case enWeekDay::Sun:
		return "Sunday";
		break;
	case enWeekDay::Mon:
		return "Monday";
		break;
	case enWeekDay::Tue:
		return "Tuesday";
		break;
	case enWeekDay::Wed:
		return "Wednesday";
		break;
	case enWeekDay::Thu:
		return "Thursday";
		break;
	case enWeekDay::Fri:
		return "Friday";
		break;
	case enWeekDay::Sat:
		return "Saturday";
		break;
	default:
		return "Not a Week Day!";
		break;
	}
}

int main()
{
	ShowWeekDayMenu();

	cout << "Today is " << GetWeekDayName(ReadWeekDay()) << endl;

	return 0;
}