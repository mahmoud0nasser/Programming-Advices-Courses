#include <iostream>

using namespace std;

// Q

int main()
{
	int fNumber, sNumber;

	cout << "Please Enter the First Number A?" << endl;
	cin >> fNumber;

	cout << "Please Enter the Second Number B?" << endl;
	cin >> sNumber;

	cout << fNumber << " = " << sNumber << " is " << (fNumber == sNumber) << endl;
	cout << fNumber << " != " << sNumber << " is " << (fNumber != sNumber) << endl;
	cout << fNumber << " > " << sNumber << " is " << (fNumber > sNumber) << endl;
	cout << fNumber << " < " << sNumber << " is " << (fNumber < sNumber) << endl;
	cout << fNumber << " >= " << sNumber << " is " << (fNumber >= sNumber) << endl;
	cout << fNumber << " <= " << sNumber << " is " << (fNumber <= sNumber) << endl;

	return 0;
}