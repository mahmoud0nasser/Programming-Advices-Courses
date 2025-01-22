#include <iostream>
#include <string>

using namespace std;

// -------------------------------------
// Problem_25
//---------------------------------------

int ReadAge()
{
	int Age;

	cout << "Enter Your Age Between 18 and 45? \n";
	cin >> Age;

	return Age;
}

bool ValidateNumberInRange(int Number, int From, int To)
{
	return (Number >= From && Number <= To);
}

int ReadUntilAgeBetween(int From, int To)
{
	int Age = 0;

	do {
		Age = ReadAge();

	} while (!ValidateNumberInRange(Age, From, To));

	return Age;
}

void PrintResult(int Age)
{
	cout << "\nYour Age is: " << Age << endl;
}

int main()
{
	PrintResult(ReadUntilAgeBetween(18, 45));

	return 0;
}

// -------------------------------------
// Problem_24
//---------------------------------------

int ReadAge()
{
	int Age;

	cout << "Enter Your Age? \n";
	cin >> Age;

	return Age;
}

bool ValidateNumberInRange(int Number, int From, int To)
{
	return (Number >= From && Number <= To);
}

void PrintResult(int Age)
{
	if (ValidateNumberInRange(Age, 18, 45))
		cout << Age << " is a Valid Age.\n";
	else
		cout << Age << " is Invaild Age.\n";
}

int main()
{
	PrintResult(ReadAge());

	return 0;
}

// -------------------------------------
// Problem_23
//---------------------------------------

void ReadTriangleData(float& A, float& B, float& C)
{
	cout << "Enter Triangle Side A? \n";
	cin >> A;

	cout << "Enter Triangle Side B? \n";
	cin >> B;

	cout << "Enter Triangle Side C? \n";
	cin >> C;
}

float CircleAreaByATriangle(float A, float B, float C)
{
	const float PI = 3.14;
	float P;

	P = (A + B + C) / 2;

	float T;

	T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

	float Area = PI * pow(T, 2);
	return Area;
}

void PrintResult(float Area)
{
	cout << "\nCircle Area = " << Area << endl;
}

int main()
{
	float A, B, C;

	ReadTriangleData(A, B, C);
	PrintResult(CircleAreaByATriangle(A, B, C));

	return 0;
}

// -------------------------------------
// Problem_22
//---------------------------------------

void ReadTriangleData(float& A, float& B)
{
	cout << "Enter Triangle Side A? \n";
	cin >> A;

	cout << "Enter Triangle Side B\n";
	cin >> B;
}

float CircleAreaByITriangle(float A, float B)
{
	const float PI = 3.14;
	float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));

	return Area;
}

void PrintResult(float Area)
{
	cout << "\nCircle Area = " << Area << endl;
}

int main()
{
	float A, B;

	ReadTriangleData(A, B);
	PrintResult(CircleAreaByITriangle(A, B));
	return 0;
}

// -------------------------------------
// Problem_21
//---------------------------------------

float ReadCircumference()
{
	float L;

	cout << "Enter Circumference L? \n";
	cin >> L;

	return L;
}

float CircleAreaByCircumference(float L)
{
	const float PI = 3.14;
	float Area = pow(L, 2) / (4 * PI);

	return Area;
}

void PrintResult(float Area)
{
	cout << "\nCircle Area = " << Area << endl;
}

int main()
{
	PrintResult(CircleAreaByCircumference(ReadCircumference()));

	return 0;
}