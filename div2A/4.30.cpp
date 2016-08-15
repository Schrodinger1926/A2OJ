#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(int argc, char const *argv[])
{	
	int n, k, temp, t = 0;
	cin >> n >> k;
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		if (temp + k <=5)
		{
			t += 1;
		}
	}

	cout << t/3 << endl;
	return 0;



}
