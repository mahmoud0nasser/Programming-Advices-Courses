#include <iostream>

using namespace std;

// # 16

int main()
{
	float a, d, area;

	cout << "Enter Side Area of Rectangle?\n";
	cin >> a;
	
	cout << "Enter Diagnol?" << endl;
	cin >> d;

	area = a * sqrt(pow(d, 2) - pow(a, 2));

	cout << "The Area of Rectangle = " << area << endl;

	return 0;
}

// # 18

int main()
{
	const float PI = 3.14;
	float r, area;

	cout << "Enter Raduis?" << endl;
	cin >> r;

	area = ceil(PI * pow(r, 2));

	cout << "Area of Circle = " << area << endl;

	return 0;
}

// # 19

int main()
{
	const float PI = 3.14;
	float d, area;

	cout << "Enter a Diameter?" << endl;
	cin >> d;

	area = ceil((PI * pow(d, 2)) / 4);

	cout << "Area of Circle = " << area << endl;

	return 0;
}

// # 20

int main()
{
	const float PI = 3.14;
	float A, area;

	cout << "Enter A?" << endl;
	cin >> A;

	area = ceil((PI * pow(A, 2)) / 4);

	cout << "Area Of Circle = " << area << endl;

	return 0;
}

// # 21

int main()
{
	const float PI = 3.14;
	float l, area;

	cout << "Enter L?" << endl;
	cin >> l;

	area = floor(pow(l, 2) / (4 * PI));

	cout << "Area of Circle = " << area << endl;

	return 0;
}

// # 22

int main()
{
	const float PI = 3.14;
	float a, b, area;
	cout << "Enter A?" << endl;
	cin >> a;
	cout << "Enter B?" << endl;
	cin >> b;
	area = floor(PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b)));
	cout << "Area of Circle = " << area << endl;
	return 0;
}

// # 23

int main()
{
	const float PI = 3.14;
	float a, b, c, area, p;

	cout << "Enter a?" << endl;
	cin >> a;

	cout << "Enter b?" << endl;
	cin >> b;

	cout << "Enter c?" << endl;
	cin >> c;

	p = (a + b + c) / 2;

	area = round(PI * pow(((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)))), 2));

	cout << "Area of Circle = " << area << endl;

	return 0;
}

// # 31

int main()
{
	int number, power2, power3, power4;

	cout << "Enter Number?" << endl;
	cin >> number;

	power2 = round(pow(number, 2));
	power3 = round(pow(number, 3));
	power4 = round(pow(number, 4));

	cout << "Power of 2 is " << power2 << endl;
	cout << "Power of 3 is " << power3 << endl;
	cout << "Power of 4 is " << power4 << endl;

	return 0;
}

// # 32

int main()
{
	int num, M, power;

	cout << "Enter a Number?" << endl;
	cin >> num;

	cout << "Enter M?" << endl;
	cin >> M;

	power = round(pow(num, M));

	cout << "Power Of " << num << " is " << power << endl;

	return 0;
}

// # 42

int main()
{
	int days, hours, minutes, seconds, totalSeconds;
	cout << "Enter Number Of Days?" << endl;
	cin >> days;
	cout << "Enter Number of Hours?" << endl;
	cin >> hours;
	cout << "Enter Number of Minutes?" << endl;
	cin >> minutes;
	cout << "Enter Number of Seconds?" << endl;
	cin >> seconds;

	totalSeconds = days * 24 * pow(60, 2) + hours * pow(60, 2) + minutes * 60 + seconds;
	cout << "Total Of Seconds = " << round(totalSeconds) << endl;

	return 0;
}

// # 43

int main()
{
	int totalSeconds, secondsPerDay, secondsPerHours, secondsPerMinutes, remainder, days, minutes, hours, seconds;

	cout << "Enter Total of Seconds?" << endl;
	cin >> totalSeconds;

	secondsPerDay = 24 * 60 * 60;
	secondsPerHours = 60 * 60;
	secondsPerMinutes = 60;

	days = floor(totalSeconds / secondsPerDay);
	remainder = totalSeconds % secondsPerDay;

	hours = floor(remainder / secondsPerHours);
	remainder = remainder % secondsPerHours;

	minutes = floor(remainder / secondsPerMinutes);
	remainder = remainder % secondsPerMinutes;

	cout << days << " : " << hours << " : " << minutes << " : " << remainder << endl;

	return 0;
}