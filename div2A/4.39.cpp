#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(int argc, char const *argv[])
{	
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	// calculate initial difficulty
	int d = 0;
	for (int i = 0; i < n-1; ++i)
	{
		if (a[i+1] - a[i] > d)
		{
			d = a[i+1] - a[i];
		}
	}

	// now close the gap b/w new diff and old diff
	int d_new = 2147483647;
	for (int i = 1; i < n - 1; ++i)
	{
		if ((a[i+1] - a[i-1]) < d_new)
		{
			d_new = a[i+1] - a[i-1];
		}

	}

	if (d_new <= d) cout << d << endl;
	else cout << d_new << endl;
}