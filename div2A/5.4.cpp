#include <iostream>
using namespace std;

int main()
{
	long long n,m, min, max;
	cin >> n >> m;
	n >= m*2 ? min = ((n/m)+1)*((n/m))*(n%m)/2 + (n/m)*((n/m) - 1)*(m - n%m)/2 : min  = n%m;
	n - m >= 1 ? max =  ((n-m+1)*(n-m)/2) : max = 0;
	cout << min << ' ' <<max << endl;
	return 0;

}