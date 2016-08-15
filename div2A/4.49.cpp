#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{	
	int n, m, temp;
	cin >> n >> m;
	vector<int> crt, wrg;
	for (int i = 0; i < n; ++i)
	{	
		cin >> temp;
		crt.push_back(temp);
	}

	for (int i = 0; i < m; ++i)
	{
		cin >> temp;
		wrg.push_back(temp);
	}
	
	// sort in-place 
	sort(crt.begin(), crt.end());
	sort(wrg.begin(), wrg.end());

	if (wrg[0] <= crt[n-1]){
		cout << -1 << endl;
		return 0;
	}

	int i = 2*crt[0];
	while(i < wrg[0]){
		if (i >= crt[n-1])
		{
			cout << i << endl;
			return 0;
		}
		i++;
	}

	cout << -1 << endl;
}