#include <iostream>
#include <string>

using namespace std;

int main()
{
	string st1, st2, st3;
	int mul;

	cout << "Please Enter String1?" << endl;
	getline(cin, st1);

	cout << "Please Enter String2?" << endl;
	cin >> st2;

	cout << "Please Enter String3?" << endl;
	cin >> st3;

	cout << "******************************************\n";

	cout << "The Length of String1 is: " << st1.length() << endl;
	cout << "Characters at 0, 2, 4, 7 are: " << st1[0] << " " << st1[2] << " " << st1[4] << " " << st1[7] << endl;
	cout << "Concatenating String2 and String3 = " << (st2 + st3) << endl;

	mul = stoi(st2) * stoi(st3);
	cout << st2 << " * " << st3 << " = " << mul << endl;

	return 0;
}