#include <iostream>
#include <string>

using namespace std;

// -------------------------------------
// Problem_45
//---------------------------------------

enum enMonthOfYear {
	Jan = 1,
	Feb = 2,
	Mar = 3,
	Apr = 4,
	May = 5,
	Jun = 6,
	Jul = 7,
	Aug = 8,
	Sep = 9,
	Oct = 10,
	Nov = 11,
	Dec = 12,
};

int ReadNumberInRange(string Message, int From, int To)
{
	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < From || Number > To);

	return Number;
}

enMonthOfYear ReadMonthOfYear()
{
	return (enMonthOfYear)ReadNumberInRange("Enter a Month [1 To 12]? ", 1, 12);
}

string GetMonthOfYear(enMonthOfYear Month)
{
	switch (Month)
	{
	case enMonthOfYear::Jan:
		return "January";
	case enMonthOfYear::Feb:
		return "February";
	case enMonthOfYear::Mar:
		return "Mrach";
	case enMonthOfYear::Apr:
		return "April";
	case enMonthOfYear::May:
		return "May";
	case enMonthOfYear::Jun:
		return "June";
	case enMonthOfYear::Jul:
		return "July";
	case enMonthOfYear::Aug:
		return "Augest";
	case enMonthOfYear::Sep:
		return "Septemper";
	case enMonthOfYear::Oct:
		return "October";
	case enMonthOfYear::Nov:
		return "November";
	case enMonthOfYear::Dec:
		return "December";
	default:
		return "Not a Valid Month";
	}
}

int main()
{
	cout << GetMonthOfYear(ReadMonthOfYear()) << endl;

	return 0;
}

// -------------------------------------
// Problem_44
//---------------------------------------

enum enDayOfWekk {
	Sat = 1,
	Sun = 2,
	Mon = 3,
	Tue = 4,
	Wed = 5,
	Thu = 6,
	Fri = 7
};

int ReadNumberInRange(string Message, int From, int To)
{
	int Number = 0;

	do {
		cout << Message << endl;
		cout << "(1) Sat" << endl;
		cout << "(2) Sun" << endl;
		cout << "(3) Mon" << endl;
		cout << "(4) Tue" << endl;
		cout << "(5) Wed" << endl;
		cout << "(6) Thu" << endl;
		cout << "(7) Fri" << endl;
		cin >> Number;
	} while (Number < From || Number > To);

	return Number;
}

enDayOfWekk ReadDayOfWeek()
{
	return (enDayOfWekk)ReadNumberInRange("Enter a Day Of Week? ", 1, 7);
}

string GetDayOfWeek(enDayOfWekk Day)
{
	switch (Day)
	{
	case enDayOfWekk::Sat:
		return "Saturday";
	case enDayOfWekk::Sun:
		return "Sunday";
	case enDayOfWekk::Mon:
		return "Monday";
	case enDayOfWekk::Tue:
		return "Tuesday";
	case enDayOfWekk::Wed:
		return "Wednesday";
	case enDayOfWekk::Thu:
		return "Thursday";
	case enDayOfWekk::Fri:
		return "Friday";
	default:
		return "Not a Valid Day!";
	}
}

int main()
{
	cout << GetDayOfWeek(ReadDayOfWeek()) << endl;

	return 0;
}

// -------------------------------------
// Problem_43
//---------------------------------------

struct strTaskDuration {
	int NumberOfDays, NumberOfhours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
	strTaskDuration TaskDuration;

	const int SecondsPerDay = 24 * 60 * 60;
	const int SecondsPerHour = 60 * 60;
	const int SecondsPerMinute = 60;

	int Remainder = 0;
	TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
	Remainder = TotalSeconds % SecondsPerDay;
	TaskDuration.NumberOfhours = floor(Remainder / SecondsPerHour);
	Remainder %= SecondsPerHour;
	TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinute);
	Remainder %= SecondsPerMinute;
	TaskDuration.NumberOfSeconds = Remainder;

	return TaskDuration;
}

void PrintTaskDurationDetails(strTaskDuration TaskDuration)
{
	cout << endl;
	cout << TaskDuration.NumberOfDays << " : " << TaskDuration.NumberOfhours << " : " << TaskDuration.NumberOfMinutes << " : " << TaskDuration.NumberOfSeconds << endl;
}

int main()
{
	int TotalSeconds = ReadPositiveNumber("Enter Total Seconds? ");

	PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));

	return 0;
}

// -------------------------------------
// Problem_42
//---------------------------------------

struct strTaskDuration {
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

strTaskDuration ReadTaskDuration()
{
	strTaskDuration TaskDuration;

	TaskDuration.NumberOfDays = ReadPositiveNumber("Enter Number Of Days? ");
	TaskDuration.NumberOfHours = ReadPositiveNumber("Enter Number Of Hours? ");
	TaskDuration.NumberOfMinutes = ReadPositiveNumber("Enter Number Of Minutes? ");
	TaskDuration.NumberOfSeconds = ReadPositiveNumber("Enter Number Of Seconds? ");

	return TaskDuration;
}

int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
	int DurationInSeconds = 0;

	DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
	DurationInSeconds += TaskDuration.NumberOfSeconds;

	return DurationInSeconds;
}

int main()
{
	cout << "\nTask Duration In Seconds: " << TaskDurationInSeconds(ReadTaskDuration()) << endl;
	cout << endl;

	return 0;
}

// -------------------------------------
// Problem_41
//---------------------------------------

float ReadPositiveNumber(string Message)
{
	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

float HoursToDays(float NumberOfHours)
{
	return (float)NumberOfHours / 24;
}

float DaysToWeeks(float NumberOfDays)
{
	return (float)NumberOfDays / 7;
}

float HoursToWeeks(float NumberOfHours)
{
	return (float)NumberOfHours / 24 / 7;
}

int main()
{
	float NumberOfHours = ReadPositiveNumber("Enter Number Of Hours? ");
	float NumberOfDays = HoursToDays(NumberOfHours);
	float NumberOfWeeks = DaysToWeeks(NumberOfDays);

	cout << endl;

	cout << "Total Hours = " << NumberOfHours << endl;
	cout << "Total Days = " << NumberOfDays << endl;
	cout << "Total Weeks = " << HoursToWeeks(NumberOfHours) << endl;

	return 0;
}