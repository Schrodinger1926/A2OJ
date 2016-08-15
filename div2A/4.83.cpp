#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{	
	int n; cin >> n;
	int a[3001];
	for (int i = 0; i < n; ++i)
	{
		int idx;
		cin >> idx;
		a[idx] = 1;
	}

	for (int i = 1; i <= n; ++i)
	{
		if (a[i] != 1)
		{
			cout << i << endl;
			return 0;
		}
	}

	cout << n + 1 << endl;
	return 0;
}