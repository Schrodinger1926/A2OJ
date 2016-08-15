#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[]){
	int a, b = 0; cin>>a;

	for (int i = 1; i < a; ++i)
	{
		if (__gcd(a-1, i) == 1)
		{
			b++;
		}
	}
	cout << b << endl;
}