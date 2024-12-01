#include <iostream>
#include <string>

using namespace std;

// Home Work - Break

int main()
{
	int arr1[10] = { 10, 20, 44, 60, 70, 12, 101, 99, 88, 15 }, SearchFor = 20;

	for (int i = 0; i < 10; i++) {
		cout << "We are at Iteration " << i + 1 << endl;
		if (SearchFor == arr1[i]) {
			cout << "\n" << SearchFor << " Found at Position " << i + 1 << endl << endl;
			break;
		}
	}

	return 0;
}