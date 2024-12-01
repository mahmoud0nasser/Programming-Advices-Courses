#include <iostream>
#include <string>

using namespace std;

// Home Work - Continue

int main()
{
	int Number, Sum = 0, i = 1;

	do {
		cout << "Enter a Number? \n";
		cin >> Number;

		if (Number > 50) {
			cout << "The Number is Greater than 50 and won't be Calculated\n";
			continue;
		}
		Sum += Number;
	} while (i <= 10);

	cout << "Sum Of All Numbers = " << Sum << endl;

	return 0;
}