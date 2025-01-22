#include <iostream>
#include <string>

using namespace std;

// -------------------------------------
// Problem_20
//---------------------------------------

float ReadSquareSide()
{
	float A;

	cout << "Enter Square Side A? \n";
	cin >> A;

	return A;
}

float CircleAreaInscribedInSquareSide(float A)
{
	const float PI = 3.14;
	float Area = (PI * pow(A, 2)) / 4;

	return Area;
}

void PrintResult(float Area)
{
	cout << "\nCircle Area Inscribed In Square = " << Area << endl;
}

int main()
{
	PrintResult(CircleAreaInscribedInSquareSide(ReadSquareSide()));

	return 0;
}

// -------------------------------------
// Problem_19
//---------------------------------------

float ReadDiameter()
{
	float D;

	cout << "Enter Radius D? \n";
	cin >> D;

	return D;
}

float CircleAreaByDiameter(float D)
{
	const float PI = 3.14;
	float Area = (PI * pow(D, 2)) / 4;
	return Area;
}

void PrintResult(float Area)
{
	cout << "\nThe Circle Area = " << Area << endl;
}

int main()
{
	PrintResult(CircleAreaByDiameter(ReadDiameter()));

	return 0;
}

// -------------------------------------
// Problem_18
//---------------------------------------

float ReadRadius()
{
	float R;

	cout << "Enter a Radius R? \n";
	cin >> R;

	return R;
}

float CircleArea(float R)
{
	const float PI = 3.14;
	float Area = PI * pow(R, 2);
	return Area;
}

void PrintResult(float Area)
{
	cout << "\nCircle Area = " << Area << endl;
}

int main()
{
	ReadRadius();
	PrintResult(CircleArea(ReadRadius()));

	return 0;
}

// -------------------------------------
// Problem_17
//---------------------------------------

void ReadNumbers(float& A, float& H)
{
	cout << "Enter Rectangle Side A? \n";
	cin >> A;

	cout << "Enter Rectangle Diagonal H? \n";
	cin >> H;
}

float TriangleArea(float A, float H)
{
	// float Area = 0.5 * A * H;
	float Area = (A / 2) * H;
	return Area;
}

void PrintResult(float Area)
{
	cout << "\nRectangle Area = " << Area << endl;
}

int main()
{
	float A, H;

	ReadNumbers(A, H);
	PrintResult(TriangleArea(A, H));

	return 0;
}

// -------------------------------------
// Problem_16
//---------------------------------------

void ReadNumbers(float& A, float& D)
{
	cout << "Enter Rectangle Side A? \n";
	cin >> A;

	cout << "Enter Rectangle Diagonal D? \n";
	cin >> D;
}

float RectangleAreaBySideAndDiagnol(float A, float D)
{
	float Area = A * sqrt(pow(D, 2) - pow(A, 2));
	return Area;
}

void PrintResult(float Area)
{
	cout << "\nRectangle Area = " << Area << endl;
}

int main()
{
	float A, D;

	ReadNumbers(A, D);
	PrintResult(RectangleAreaBySideAndDiagnol(A, D));

	return 0;
}