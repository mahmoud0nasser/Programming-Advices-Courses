#include <iostream>

using namespace std;

// Q1

// --------------------------------------------------

int main()
{
	int fNumber, sNumber;
	cout << "Please Enter First Number?" << endl;
	cin >> fNumber;
	cout << "Please Enter Second Number?" << endl;
	cin >> sNumber;

	cout << fNumber << " + " << sNumber << " = " << fNumber + sNumber << endl;
	cout << fNumber << " - " << sNumber << " = " << fNumber - sNumber << endl;
	cout << fNumber << " * " << sNumber << " = " << fNumber * sNumber << endl;
	cout << fNumber << " / " << sNumber << " = " << fNumber / sNumber << endl;
	cout << fNumber << " % " << sNumber << " = " << fNumber % sNumber << endl;

	return 0;
}

// Q2

// --------------------------------------------------

// # 7

int main()
{
	int halfNumber;
	cout << "Enter a Number to get a Half?" << endl;
	cin >> halfNumber;

	cout << "Half of " << halfNumber << " is " << halfNumber / 2 << endl;

	return 0;
}

// # 9

int main()
{
	int num1, num2, num3;
	cout << "Please Enter a First Number?" << endl;
	cin >> num1;
	cout << "PLease Enter a Second Number?" << endl;
	cin >> num2;
	cout << "PLease Enter a Third Number?" << endl;
	cin >> num3;

	cout << "Sum Of (" << num1 << ", " << num2 << ", " << num3 << ") is " << num1 + num2 + num3 << endl;

	return 0;
}

// # 10

int main()
{
	int mark1, mark2, mark3, sum;
	cout << "Please Enter First Mark?" << endl;
	cin >> mark1;
	cout << "Please Enter Second Mark?" << endl;
	cin >> mark2;
	cout << "Please Enter Third Mark?" << endl;
	cin >> mark3;
	sum = mark1 + mark2 + mark3;
	cout << "Average is " << sum / 3 << endl;

	return 0;
}


// # 14

int main()
{
	int num1, num2, temp;
	cout << "Please Enter two numbers?" << endl;
	cin >> num1 >> num2;
	cout << "Two Numbers Before Swapping (" << num1 << ", " << num2 << ")" << endl;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "Two Numbers After Swapping (" << num1 << ", " << num2 << ")" << endl;
	return 0;
}

// # 15

int main()
{
	int a, b, area;
	cout << "Enter A?" << endl;
	cin >> a;
	cout << "Enter B?" << endl;
	cin >> b;
	area = a * b;
	cout << "Area of Rectangle = " << area << endl;
	return 0;
}

// # 17

int main()
{
	int a, h, area;
	cout << "enter a?" << endl;
	cin >> a;
	cout << "enter b?" << endl;
	cin >> h;
	// area = (1/2) * a * h;
	area = 0.5 * a * h;
	// area = (a / 2) * h;
	cout << "area of rectangle = " << area << endl;
	return 0;
}

// # 19

int main()
{
	const float PI = 3.14;
	int d, area;
	cout << "Enter D?" << endl;
	cin >> d;
	area = (PI * (d * d)) / 4;
	cout << "Area of Rectangle = " << area << endl;
	return 0;
}

// # 20

int main()
{
	const float PI = 3.14;
	int a, area;
	cout << "Enter A?" << endl;
	cin >> a;
	area = (PI * a * a) / 4;
	cout << "Area of Circle = " << area << endl;
	return 0;
}

// # 21

int main()
{
	const float PI = 3.14;
	int l, area;
	cout << "Enter L?" << endl;
	cin >> l;
	area = (l * l) / (4 * PI);
	cout << "Area of Circle = " << area << endl;
	return 0;
}

// # 22

int main()
{
	const float PI = 3.14;
	int a, b, area;
	cout << "Enter A?" << endl;
	cin >> a;
	cout << "Enter B?" << endl;
	cin >> b;
	area = PI * ((b * b) / 4) * ((2 * a - b) / (2 * a + b));
	cout << "Area of Circle = " << area << endl;
	return 0;
}

// # 31

int main()
{
	int Number, Powerof2, Powerof3, Powerof4;
	cout << "Enter a Number?" << endl;
	cin >> Number;
	Powerof2 = Number * Number;
	Powerof3 = Powerof2 * Number;
	Powerof4 = Powerof3 * Number;

	cout << "Power Of 2 is " << Powerof2 << endl;
	cout << "Power of 3 is " << Powerof3 << endl;
	cout << "Power of 4 is " << Powerof4 << endl;

	return 0;
}

// # 35

int main()
{
	int Pennies, Nickles, Dimes, Quarters, Dollers, totalPennies;
	float totalDollers;
	cout << "Enter Number of Pennies?" << endl;
	cin >> Pennies;
	cout << "Enter Number of Nickles?" << endl;
	cin >> Nickles;
	cout << "Enter Number of Dimes?" << endl;
	cin >> Dimes;
	cout << "Enter Number of Quarters?" << endl;
	cin >> Quarters;
	cout << "Enter Number of Dollers?" << endl;
	cin >> Dollers;

	totalPennies = Pennies + (Nickles * 5) + (Dimes * 10) + (Quarters * 25) + (Dollers * 100);
	totalDollers = totalPennies / 100.0;

	cout << "You have " << totalPennies << " Pennies" << endl;
	cout << "You have " << totalDollers << " Dollers\n";

	return 0;
}

// # 39

int main()
{
	int totalBill, cashPaid, remainder;
	cout << "Enter Total Bill?" << endl;
	cin >> totalBill;
	cout << "Enter Cash Paid?" << endl;
	cin >> cashPaid;
	
	remainder = cashPaid - totalBill;

	cout << "Remainder = " << remainder << endl;
	return 0;
}

// # 40

int main()
{
	int billValue;
	float totalBill;
	cout << "Enter Bill Values?" << endl;
	cin >> billValue;

	totalBill = billValue * 1.1;
	totalBill = totalBill * 1.16;

	cout << "Total Bill = " << totalBill << endl;
	return 0;
}

// # 42

int main()
{
	int days, hours, minutes, seconds, totalSeconds;
	cout << "Enter Number Of Days?" << endl;
	cin >> days;
	cout << "Enter Number of Hours?" << endl;
	cin >> hours;
	cout << "Enter Number of Minutes?" << endl;
	cin >> minutes;
	cout << "Enter Number of Seconds?" << endl;
	cin >> seconds;

	totalSeconds = days * 24 * 60 * 60 + hours * 60 * 60 + minutes * 60 + seconds;
	cout << "Total Of Seconds = " << totalSeconds << endl;

	return 0;
}

// # 43

int main()
{
	int totalSeconds, secondsPerDay, secondsPerHours, secondsPerMinutes, remainder, days, minutes, hours, seconds;

	cout << "Enter Total of Seconds?" << endl;
	cin >> totalSeconds;

	secondsPerDay = 24 * 60 * 60;
	secondsPerHours = 60 * 60;
	secondsPerMinutes = 60;

	days = floor(totalSeconds / secondsPerDay);
	remainder = totalSeconds % secondsPerDay;

	hours = floor(remainder / secondsPerHours);
	remainder = remainder % secondsPerHours;

	minutes = floor(remainder / secondsPerMinutes);
	remainder = remainder % secondsPerMinutes;

	cout << days << " : " << hours << " : " << minutes << " : " << remainder << endl;

	return 0;
}

// # 47

int main()
{
	int loanAmount, monthlyPayment, months;

	cout << "Enter Loan Amount?" << endl;
	cin >> loanAmount;

	cout << "Enter Monthly Payment?" << endl;
	cin >> monthlyPayment;

	months = loanAmount / monthlyPayment;

	cout << "You will Pay on " << months << " Months.\n";

	return 0;
}

// # 48

int main()
{
	int LoanAmount, months, monthlyPayment;

	cout << "Enter Loan Amount?" << endl;
	cin >> LoanAmount;

	cout << "How Many Months Will You Pay?\n";
	cin >> months;

	monthlyPayment = LoanAmount / months;

	cout << "You Will Pay " << monthlyPayment << " Every Month." << endl;

	return 0;
}