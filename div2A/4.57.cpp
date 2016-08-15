#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{	
	int a1, a2, a3;
	cin >> a1 >> a2 >> a3;
	float out = 4*(sqrt(float(a1*a2)/a3) + sqrt(float(a1*a3)/a2) + sqrt(float(a3*a2)/a1));
	cout << out << endl;
}	