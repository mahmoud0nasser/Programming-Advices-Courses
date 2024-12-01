#include <iostream>
#include <string>

using namespace std;

// Home Work - While Loop

// # 50

int main()
{
	int pinCode, i = 1, balance = 7500;

	cout << "Enter PIN Code Number? \n";
	cin >> pinCode;

	while (i <= 4) {
		if (i > 3) {
			cout << "Card Locked!\n";
			break;
		}
		if (pinCode == 1234) {
			cout << "Your Balance is " << balance << endl;
		}
		else {
			cout << "Enter PIN Code Number? \n";
			cin >> pinCode;
		}
		i++;
	}

	return 0;
}

// # 46

int main()
{
	int i = 'A';
	while (i <= 'Z') {
		cout << char(i) << endl;
		i++;
	}

	return 0;
}

// # 37

int main()
{
	int Number, Sum = 0;

	cout << "Enter a Number? \n";
	cin >> Number;

	while (Number != -99) {
		Sum += Number;

		cout << "Enter a Number? \n";
		cin >> Number;
	}

	cout << "Sum Of Entered Number = " << Sum << endl;

	return 0;
}

// # 32

int main()
{
	int Base, Power, Sum = 1, i = 1;

	cout << "Enter Base Number? \n";
	cin >> Base;

	cout << "Enter Power Number? \n";
	cin >> Power;

	while (i <= Power) {
		Sum *= Base;
		i++;
	}

	cout << "Sum Of Power = " << Sum << endl;

	return 0;
}

// # 30

int main()
{
	int Number, Fact = 1, i;

	cout << "Enter a Positive Number? \n";
	cin >> Number;

	while (Number <= 0) {
		cout << "Wrong Number, Plz Enter a Positive Number? \n";
		cin >> Number;
	}

	i = Number;
	while (i >= 1) {
		cout << i;
		if (i != 1) {
			cout << " X ";
		}
		Fact *= i;
		i--;
	}

	cout << " = " << Fact << endl;

	return 0;
}

// # 29

int main()
{
	int Number, i = 1, Sum = 0;

	cout << "Enter a Number? \n";
	cin >> Number;

	while (i <= Number) {
		if (i % 2 == 0) {
			Sum += i;
		}
	}

	cout << "Total Even Numbers = " << Sum << endl;

	return 0;
}

// # 28

int main()
{
	int Number, i = 1, Sum = 0;

	cout << "Enter a Number? \n";
	cin >> Number;

	while (i <= Number) {
		Sum += i;
		i += 2;
	}

	cout << "Sum OF Odd Numbers = " << Sum << endl;

	return 0;
}

// # 27

int main()
{
	int Row, i;

	cout << "Enter How Many Rows? \n";
	cin >> Row;

	i = Row;

	while (i >= 1) {
		cout << i << endl;
		i--;
	}

	return 0;
}

// # 26

int main()
{
	int Row, i = 1;

	cout << "Enter How Many Rows? \n";
	cin >> Row;

	while (i <= Row) {
		cout << i << endl;
		i++;
	}

	return 0;
}