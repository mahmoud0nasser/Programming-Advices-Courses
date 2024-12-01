#include <iostream>
#include <string>

using namespace std;

// Home Work - Nested For Loops

// # 6

int main()
{
	int Row;

	cout << "Enter How Many Rows? \n";
	cin >> Row;

	for (int i = 1; i <= Row; i++) {
		for (int j = i; j <= Row; j++) {
			cout << j << " ";
		}
		cout << endl;
	}

	return 0;
}

// # 5

int main()
{
	int Row;

	for (int i = 'A'; i <= 'Z'; i++) {
		for (int j = 'A'; j <= i; j++) {
			cout << char(j) << " ";
		}
		cout << endl;
	}

	return 0;
}

// # 4

int main()
{
	int Row;

	cout << "Enter How Many Rows? \n";
	cin >> Row;

	for (int i = 1; i <= Row; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}

		cout << endl;
	}

	return 0;
}

// # 3

int main()
{
	int Row;

	cout << "Enter How Many Rows? \n";
	cin >> Row;

	for (int i = 1; i <= Row; i++) {
		for (int j = 0; j <= Row - i; j++) {
			cout << j + 1 << " ";
		}

		cout << endl;
	}

	return 0;
}

// # 2

int main()
{
	int Row;

	cout << "Enter How Many Rows? \n";
	cin >> Row;

	for (int i = 1; i <= Row; i++) {
		for (int j = Row; j >= i; j--) {
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}

// # 1

int main()
{
	for (int i = 'A'; i <= 'Z'; i++) {
		for (int j = 'A'; j <= 'Z'; j++) {
			cout << char(i) << char(j) << endl;
		}
	}

	return 0;
}