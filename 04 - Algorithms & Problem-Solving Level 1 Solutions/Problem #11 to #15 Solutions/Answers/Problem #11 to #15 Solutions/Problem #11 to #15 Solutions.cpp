#include <iostream>
#include <string>

using namespace std;

// -------------------------------------
// Problem_15
//---------------------------------------

void ReadNumbers(float& A, float& B)
{
	cout << "Enter Rectangle Width A? \n";
	cin >> A;

	cout << "Enter Rectangle Length B? \n";
	cin >> B;
}

float CalculateRectangleArea(float A, float B)
{
	return A * B;
}

void PrintResult(float Area)
{
	cout << "\nRectangle Area = " << Area << endl;
}

int main()
{
	float A, B;

	ReadNumbers(A, B);
	PrintResult(CalculateRectangleArea(A, B));

	return 0;
}

// -------------------------------------
// Problem_14
//---------------------------------------

void ReadNumbers(int& Num1, int& Num2)
{
	cout << "Enter Number A? \n";
	cin >> Num1;

	cout << "Enter Number B? \n";
	cin >> Num2;
}

void Swap(int& Num1, int& Num2)
{
	int Temp;
	Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;
}

void PrintNumbers(int Num1, int Num2)
{
	cout << "\nThe Number1 = " << Num1 << endl;
	cout << "The Number2 = " << Num2 << endl;
}

int main()
{
	int Num1, Num2;

	ReadNumbers(Num1, Num2);
	PrintNumbers(Num1, Num2);
	Swap(Num1, Num2);
	PrintNumbers(Num1, Num2);

	return 0;
}

// -------------------------------------
// Problem_13
//---------------------------------------

void ReadNumbers(int& A, int& B, int& C)
{
	cout << "Enter A? \n";
	cin >> A;

	cout << "Enter B? \n";
	cin >> B;

	cout << "Enter C? \n";
	cin >> C;
}

int MaxOf3Numbers(int A, int B, int C)
{
	if (A > B)
		if (A > C)
			return A;
		else
			return C;
	else
		if (B > C)
			return B;
		else
			return C;
}

void PrintResult(int Max)
{
	cout << "\nThe Maximum Number is: " << Max << endl;
}

int main()
{
	int A, B, C;

	ReadNumbers(A, B, C);

	PrintResult(MaxOf3Numbers(A, B, C));

	return 0;
}

// -------------------------------------
// Problem_12
//---------------------------------------

void ReadNumbers(int& Num1, int& Num2)
{
	cout << "Enter Number 1? \n";
	cin >> Num1;

	cout << "Enter Number 2? \n";
	cin >> Num2;
}

int MaxOf2Numbers(int Num1, int Num2)
{
	if (Num1 > Num2)
		return Num1;
	else
		return Num2;
}

void PrintResult(int Max)
{
	cout << "\nThe Maximum Number is: " << Max << endl;
}

int main()
{
	int Num1, Num2;

	ReadNumbers(Num1, Num2);

	PrintResult(MaxOf2Numbers(Num1, Num2));

	return 0;
}

// -------------------------------------
// Problem_11
//---------------------------------------

enum enPassFail {Pass = 1, Fail = 2};

void ReadNumbers(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "Enter Your Mark 1? \n";
	cin >> Mark1;

	cout << "Enter Your Mark 2? \n";
	cin >> Mark2;

	cout << "Enter Your Mark 3? \n";
	cin >> Mark3;
}

int SumOf3Numbers(int Mark1, int Mark2, int Mark3)
{
	return Mark1 + Mark2 + Mark3;
}

float CalculateAverageOf3Numbers(int Mark1, int Mark2, int Mark3)
{
	return (float)SumOf3Numbers(Mark1, Mark2, Mark3) / 3;
}

enPassFail CheckMarks(float Average)
{
	if (Average >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResult(float Average)
{
	cout << "\nThe Average is: " << Average << endl;
	
	if (CheckMarks(Average) == enPassFail::Pass)
		cout << "\nYou Passed!" << endl;
	else
		cout << "\nYou Failed!" << endl;
}

int main()
{
	int Mark1, Mark2, Mark3;

	ReadNumbers(Mark1, Mark2, Mark3);
	PrintResult(CalculateAverageOf3Numbers(Mark1, Mark2, Mark3));

	return 0;
}