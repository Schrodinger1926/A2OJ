#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{	
	int n, m;
	vector<int> A;
	cin >> n >> m;

	for (int i = 0; i < m; ++i)
	{
		int x;
		cin >> x;
		A.push_back(x);
	}

	sort(A.begin(), A.end());
	int min = 996;
	
	for (int i = 0; i < m-n+1; ++i)
	{	
		int diff = A[i+n-1] - A[i];
		if (diff < min)
		{
			min = diff;
		}
	}

	cout << min << endl;
	return 0;
}