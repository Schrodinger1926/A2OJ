#include <iostream>
#include <algorithm>
using namespace std;

// Solve in O(N)
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	long long a[n];
	int cum = 0;
	long long ss = 0;
	int cnt1[n];
	long long s = 0;
	if(n <3){
		cout << 0 << endl;
		return 0;
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		s += a[i];

	}
	// forward condition
	if (s%3 != 0)
	{
		cout << 0 << endl;
		return 0;
	}
	
	// sub part size
	s /= 3;
	
	for (int i = n-1; i >= 0; --i)
	{	
		ss += a[i];
		if (ss == s)
		{
			cum += 1;
		}
		cnt1[i] = cum;
	}
	ss = 0;
	long long ways = 0;
	for (int i = 0; i < n-2; ++i)
	{	
		ss += a[i];
		if (ss == s)
		{
			ways += cnt1[i+2];
		}
	}

	cout << ways << endl;
 	return 0;
}

