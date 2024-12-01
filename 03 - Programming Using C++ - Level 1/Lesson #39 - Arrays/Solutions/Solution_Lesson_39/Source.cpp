#include <iostream>
#include <string>

using namespace std;

// Array

int main()
{
	float Grade[3], Sum, Avg;

	cout << "Enter Grade1?" << endl;
	cin >> Grade[0];

	cout << "Enter Grade2?" << endl;
	cin >> Grade[1];

	cout << "Enter Grade3?" << endl;
	cin >> Grade[2];

	Sum = Grade[0] + Grade[1] + Grade[2];
	Avg = Sum / 3.0;

	cout << "******************************************\n" << endl;
	cout << "The Average of Grades is: " << Avg << endl;

	return 0;
}