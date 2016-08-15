#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(int argc, char const *argv[])
{	
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	bool flag = true;
	while(flag){
		sort(v.begin(), v.end());
		flag = false;
		for (int i = n-1; i >= 1; --i)
		{
			if (v[i-1] > 0 and v[i-1] < v[i])
			{
				v[i] = v[i] - v[i-1];
				flag = true;
			}
		}
	}
	int init = 0;
	cout << accumulate(v.begin(), v.end(), init) << endl;
}	