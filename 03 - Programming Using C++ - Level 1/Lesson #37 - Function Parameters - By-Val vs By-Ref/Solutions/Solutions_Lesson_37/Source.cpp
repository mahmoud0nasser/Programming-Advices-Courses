#include <iostream>
#include <string>

using namespace std;

// Home Work - Call By Val VS By Ref

void SwapNumber(int &num1, int &num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}

int main()
{
	int num1, num2;

	cout << "Enter Two Numers?" << endl;
	cin >> num1 >> num2;

	cout << "Two Numbers Before Swapping (" << num1 << ", " << num2 << ")\n";
	SwapNumber(num1, num2);
	cout << "Two Numbers After Swapping (" << num1 << ", " << num2 << ")\n";
	return 0;
}