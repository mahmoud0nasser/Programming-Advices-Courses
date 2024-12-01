#include <iostream>
#include <string>

using namespace std;

// -----------------------------------------------

// # 45

// -----------------------------------------------

int main()
{
	int Month;

	cout << "Enter Month Number? \n";
	cin >> Month;

	if (Month == 1) {
		cout << "January" << endl;
	}
	else if (Month == 2) {
		cout << "February" << endl;
	}
	else if (Month == 3) {
		cout << "March\n";
	}
	else if (Month == 4) {
		cout << "April" << endl;
	}
	else if (Month == 5) {
		cout << "May\n";
	}
	else if (Month == 6) {
		cout << "June\n";
	}
	else if (Month == 7) {
		cout << "July\n";
	}
	else if (Month == 8) {
		cout << "August\n";
	}
	else if (Month == 9) {
		cout << "September\n";
	}
	else if (Month == 10) {
		cout << "October" << endl;
	}
	else if (Month == 11) {
		cout << "November" << endl;
	}
	else if (Month == 12) {
		cout << "December" << endl;
	}
	else {
		cout << "Wrong Month!\n";
	}

	return 0;
}

// -----------------------------------------------

// # 44

// -----------------------------------------------

int main()
{
	int Day;

	cout << "Enter Day? \n";
	cin >> Day;

	if (Day == 1) {
		cout << "Sunday" << endl;
	}
	else if (Day == 2) {
		cout << "Monday" << endl;
	}
	else if (Day == 3) {
		cout << "Tuesday" << endl;
	}
	else if (Day == 4) {
		cout << "WednesDay" << endl;
	}
	else if (Day == 5) {
		cout << "Thursday" << endl;
	}
	else if (Day == 6) {
		cout << "Friday" << endl;
	}
	else if (Day == 7) {
		cout << "Saturday" << endl;
	}
	else {
		cout << "Wrong Day!\n";
	}
	return 0;
}

// -----------------------------------------------

// # 36

// -----------------------------------------------

int main()
{
	int Num1, Num2, result;
	char Op;

	cout << "Enter First Number? \n";
	cin >> Num1;

	cout << "Enter Second Number? \n";
	cin >> Num2;

	cout << "Choose Operation Type (+, -, *, /)? \n";
	cin >> Op;

	if (Op == '+') {
		result = Num1 + Num2;
	}
	else if (Op == '-') {
		result = Num1 - Num2;
	}
	else if (Op == '*') {
		result = Num1 * Num2;
	}
	else if (Op == '/') {
		if (Num1 == 0) {
			result = Num1 / Num2;
		}
		else {
			cout << "Cannot Divide on Zero\n";
		}
	}
	else {
		cout << "Wrong Operation, Try Again!\n";
	}

	cout << "Your Result is: " << result << endl;

	return 0;
}

// -----------------------------------------------

// # 34

// -----------------------------------------------

int main()
{
	float totalSales, percentage;

	cout << "Enter Total Sales? \n";
	cin >> totalSales;

	if (totalSales >= 1000000) {
		totalSales *= 0.01;
	}
	else if (totalSales >= 500000) {
		totalSales *= 0.02;
	}
	else if (totalSales >= 100000) {
		totalSales *= 0.03;
	}
	else if (totalSales >= 50000) {
		totalSales *= 0.05;
	}
	else {
		totalSales = 0;
	}

	cout << "Your Percentage is: " << totalSales << endl;

	return 0;
}

// -----------------------------------------------

// # 33

// -----------------------------------------------

int main()
{
	int Grade;

	cout << "Enter Your Grade? \n";
	cin >> Grade;

	if (Grade >= 90) {
		cout << "A\n";
	}
	else if (Grade >= 80) {
		cout << "B\n";
	}
	else if (Grade >= 70) {
		cout << "C\n";
	}
	else if (Grade >= 60) {
		cout << "D\n";
	}
	else if (Grade >= 50) {
		cout << "E\n";
	}
	else {
		cout << "F\n";
	}

	return 0;
}