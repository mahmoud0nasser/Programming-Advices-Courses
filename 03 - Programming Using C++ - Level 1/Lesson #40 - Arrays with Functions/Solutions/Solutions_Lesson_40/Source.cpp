#include <iostream>
#include <string>

using namespace std;

// Home Work - Array With Functions

void ReadArrayData(float Grade[3])
{
	cout << "Enter Grade1?" << endl;
	cin >> Grade[0];

	cout << "Enter Grade2?" << endl;
	cin >> Grade[1];

	cout << "Enter Grade3?" << endl;
	cin >> Grade[2];
}

float GetAverage(float Grade[3])
{
	return (Grade[0] + Grade[1] + Grade[2]) / 3;
}

int main()
{
	float Grade[3];

	ReadArrayData(Grade);
	float Avg = GetAverage(Grade);

	cout << "Average of Grades = " << Avg << endl;

	return 0;
}