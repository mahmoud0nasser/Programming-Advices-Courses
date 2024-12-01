#include <iostream>
#include <string>

using namespace std;

// # 43

string HoursDay(int totalSeconds)
{
	int Remainder, Hour, Day, Minute;
	int SecPerDay = 24 * 60 * 60;
	int SecPerHour = 60 * 60;
	int SecPerMinute = 60;

	Day = floor(totalSeconds / SecPerDay);
	Remainder = totalSeconds % SecPerDay;

	Hour = floor(Remainder / SecPerHour);
	Remainder = Remainder % SecPerHour;

	Minute = floor(Remainder / SecPerMinute);
	Remainder %= SecPerMinute;

	return (to_string(Day) + " : " + to_string(Hour) + " : " + to_string(Minute) + " : " + to_string(Remainder));
}

int main()
{
	int totalSeconds;

	cout << "Enter Total Of Seconds?" << endl;
	cin >> totalSeconds;

	cout << HoursDay(totalSeconds) << endl;

	return 0;
}

// # 42

int TotalSeconds(int Days, int Hours, int Minutes, int Seconds)
{
	return (Days * 24 * 60 * 60) + (Hours * 60 * 60) + (Minutes * 60) + Seconds;
}

int main()
{
	int Days, Minutes, Hours, Seconds, totalSeconds;

	cout << "Enter Days?" << endl;
	cin >> Days;

	cout << "Enter Hours?" << endl;
	cin >> Hours;

	cout << "Enter Minutes?" << endl;
	cin >> Minutes;

	cout << "Enter Seconds?" << endl;
	cin >> Seconds;

	totalSeconds = TotalSeconds(Days, Hours, Minutes, Seconds);

	cout << "Total Of Seconds = " << totalSeconds << endl;

	return 0;
}

// # 32

int PowerOfM(int Number, int M)
{
	return pow(Number, M);
}

int main()
{
	int Number, M;

	cout << "Enter Number?" << endl;
	cin >> Number;

	cout << "Enter M?" << endl;
	cin >> M;

	cout << "Power Of " << M << " is: " << PowerOfM(Number, M) << endl;

	return 0;
}

// # 31

int Power4(int Number)
{
	return pow(Number, 4);
}

int Power3(int Number)
{
	return pow(Number, 3);
}

int Power2(int Number)
{
	return pow(Number, 2);
}

int main()
{
	int Number;

	cout << "Enter Number?" << endl;
	cin >> Number;

	cout << "Power Of 2 is: " << Power2(Number) << endl;
	cout << "Power Of 3 is: " << Power3(Number) << endl;
	cout << "Power Of 4 is: " << Power4(Number) << endl;

	return 0;
}

// # 23

float CircleArea(float a, float b, float c)
{
	const float PI = 3.14;
	float area, p;

	p = (a + b + c) / 2;
	area = PI * pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2);

	return area;
}

int main()
{
	float a, b, c, area;

	cout << "Enter A?" << endl;
	cin >> a;

	cout << "Enter B?" << endl;
	cin >> b;

	cout << "Enter C?" << endl;
	cin >> c;

	area = CircleArea(a, b, c);

	cout << "Area = " << area << endl;

	return 0;
}

// # 22

float CircleArea(float a, float b)
{
	const float PI = 3.14;
	float area;
	area = PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));

	return area;
}

int main()
{
	float a, b, area;

	cout << "Enter A?" << endl;
	cin >> a;

	cout << "Enter B?" << endl;
	cin >> b;

	area = CircleArea(a, b);

	cout << "Area = " << area << endl;

	return 0;
}

// # 21

float CircleArea(float l)
{
	const float PI = 3.14;
	float area;
	area = pow(l, 2) / (4 * PI);
	return area;
}

int main()
{
	float l, area;

	cout << "Enter L?" << endl;
	cin >> l;

	area = CircleArea(l);

	cout << "Area = " << area << endl;

	return 0;
}

// # 20

float CircleArea(float a)
{
	const float PI = 3.14;
	float area;
	area = (PI * pow(a, 2)) / 4;
	return area;
}

int main()
{
	float a, area;

	cout << "Enter A?" << endl;
	cin >> a;

	area = CircleArea(a);

	cout << "Area = " << area << endl;

	return 0;
}

// # 19

float CircleArea(float d)
{
	const float PI = 3.14;
	float area;
	area = (PI * pow(d, 2)) / 4;
	return area;
}

int main()
{
	float d, area;

	cout << "Enter D?" << endl;
	cin >> d;

	area = CircleArea(d);

	cout << "Area = " << area << endl;

	return 0;
}

// # 18

float AreaOfCircle(float r)
{
	const float PI = 3.14;
	return PI * pow(r, 2);
}

int main()
{
	float r, area;

	cout << "Enter Radius?" << endl;
	cin >> r;

	area = AreaOfCircle(r);

	cout << "Area = " << area << endl;

	return 0;
}

// # 16

float AreaOfRectangle(float a, float d)
{
	float area = a * sqrt(pow(d, 2) - pow(a, 2));
	return area;
}

int main()
{
	float a, d, area;

	cout << "Enter a?" << endl;
	cin >> a;

	cout << "Enter d?" << endl;
	cin >> d;

	area = AreaOfRectangle(a, d);

	cout << "Area = " << area << endl;

	return 0;
}

// # 15

int RectangleArea(int a, int b)
{
	return a * b;
}

int main()
{
	int a, b, area;

	cout << "Enter A?" << endl;
	cin >> a;

	cout << "Enter B?" << endl;
	cin >> b;

	area = RectangleArea(a, b);

	cout << "Area = " << area << endl;

	return 0;
}

// # 14

void SwapNumber(int num1, int num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "Two Numbers After Swapping (" << num1 << ", " << num2 << ")\n";
}

int main()
{
	int num1, num2;

	cout << "Enter Two Numers?" << endl;
	cin >> num1 >> num2;

	cout << "Two Numbers Before Swapping (" << num1 << ", " << num2 << ")\n";
	SwapNumber(num1, num2);
	return 0;
}

// # 1

void PrintName(string Name)
{
	cout << Name << endl;
}

int main()
{
	string name;

	cout << "Enter Your Name?" << endl;
	getline(cin, name);

	PrintName(name);

	return 0;
}
