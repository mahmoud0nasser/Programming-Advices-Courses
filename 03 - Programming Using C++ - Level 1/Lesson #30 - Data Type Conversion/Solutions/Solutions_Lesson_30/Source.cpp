#include <iostream>
#include <string>

using namespace std;

int main()
{
	string st1 = "43.22";
	int N1 = 20;
	double N2 = 33.5;
	float N3 = 55.23;
	int st1_i, N3_i;
	float st1_f;
	double st1_d;
	string N1_S, N2_S, N3_S;

	st1_i = stoi(st1);
	st1_f = stof(st1);
	st1_d = stod(st1);

	N1_S = to_string(N1);
	N2_S = to_string(N2);
	N3_S = to_string(N3);

	N3_i = (int)N3;
	N3_i = int(N3);
	N3_i = N3;

	return 0;
}