#include <iostream>
#include <string>

using namespace std;

// Home Work - Global VS Local

int x = 10;

void MyFunction()
{
	int x = 90;

	cout << "X in Function = " << x << endl;
}

int main()
{
	int x = 20;

	cout << "X in Main = " << x << endl;

	MyFunction();

	cout << "X as Global Variable = " << ::x << endl;

	return 0;
}