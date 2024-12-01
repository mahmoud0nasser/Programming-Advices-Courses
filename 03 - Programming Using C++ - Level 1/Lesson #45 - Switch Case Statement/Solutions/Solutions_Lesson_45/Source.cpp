#include <iostream>
#include <string>

using namespace std;

// Home Work - Switch Case

// # 45

int main()
{
	int Month;

	cout << "Enter Month? \n";
	cin >> Month;

	switch (Month)
	{
	case 1:
		cout << "January\n";
		break;
	case 2:
		cout << "February\n";
		break;
	case 3:
		cout << "March\n";
		break;
	case 4:
		cout << "April\n";
		break;
	case 5:
		cout << "May\n";
		break;
	case 6:
		cout << "June\n";
		break;
	case 7:
		cout << "July\n";
		break;
	case 8:
		cout << "August\n";
		break;
	case 9:
		cout << "September\n";
		break;
	case 10:
		cout << "October\n";
		break;
	case 11:
		cout << "November\n";
		break;
	case 12:
		cout << "December\n";
		break;
	default:
		cout << "Wrong Month" << endl;
		break;
	}

	return 0;
}

// # 44

int main()
{
	int day;

	cout << "Enter Day?" << endl;
	cin >> day;

	switch (day)
	{
	case 1:
		cout << "Sunday" << endl;
		break;
	case 2:
		cout << "Monday" << endl;
		break;
	case 3:
		cout << "Tuesday" << endl;
		break;
	case 4:
		cout << "Wednesday" << endl;
		break;
	case 5:
		cout << "Thursday" << endl;
		break;
	case 6:
		cout << "Friday" << endl;
		break;
	case 7:
		cout << "Saturday" << endl;
		break;
	default:
		cout << "Wrong Day, Try Again!" << endl;
		break;
	}

	return 0;
}

// # 36

int main()
{
	int num1, num2, result;
	char Op;

	cout << "Enter First Number? \n";
	cin >> num1;

	cout << "Enter Second Number? \n";
	cin >> num2;

	cout << "Choose an Operator: \n";
	cout << "(1) +\n";
	cout << "(2) -\n";
	cout << "(3) *\n";
	cout << "(4) /\n";

	cout << "Your Choice: ";
	cin >> Op;

	switch (Op) {
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		if (num1 == 0) {
			cout << "Num1 is Equal to Zero and Division not accept Zero.\n";
			break;
		}
		else {
			result = num1 / num2;
			break;
		}
	default:
		result = 0;
		cout << "Please Try Again.\n";
	}

	cout << "Your Result is: " << result << endl;

	return 0;
}