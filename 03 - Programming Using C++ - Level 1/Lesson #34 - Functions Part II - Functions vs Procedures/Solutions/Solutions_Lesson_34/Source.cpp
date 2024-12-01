#include <iostream>
#include <string>

using namespace std;

// Procedure

void mySumProcedural()
{
	int num1, num2;

	cout << "Please Enter Number1?" << endl;
	cin >> num1;

	cout << "Please Enter Number2?" << endl;
	cin >> num2;

	cout << "***************************************\n";
	cout << num1 + num2 << endl;
}

// Function

int mySumFunction()
{
	int num1, num2;

	cout << "Please Enter Number1?" << endl;
	cin >> num1;

	cout << "Please Enter Number2?" << endl;
	cin >> num2;

	return num1 + num2;
}

int main()
{
	int result;
	mySumProcedural();

	result = mySumFunction();

	cout << "****************************************" << endl;
	cout << result << endl;

	return 0;
}