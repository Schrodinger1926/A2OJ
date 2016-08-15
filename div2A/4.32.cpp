#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(int argc, char const *argv[])
{	
	int n, m;
	cin >> n >> m;
	int v[n];
	// just ensure for now that its zero throughout
	fill_n(v,n,0);

	for (int i = 0; i < n; ++i)
	{
		int k, temp;
		cin >> k;
		for (int j = 0; j < k; ++j)
		{
			cin >> temp;
			if (temp < m) v[i] = 1;
		}
	}

	int counter = 0;
	for (int i = 0; i < n; ++i)
	{
		if (v[i] == 1) counter += 1;
	}

	cout << counter << endl;
	for (int i = 0; i < n; ++i)
	{
		if (v[i] == 1) cout << i+1 << " ";
	}
	cout << endl;
	return 0;
}
