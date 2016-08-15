#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{	
	int n, n3 = 0, n4 = 0;
	cin >> n;
	int s1 = 0, s2 = 0;
	for (int i = 0; i < n; ++i)
	{
		int xi, yi;
		cin >> xi >> yi;
		s1 += xi; s2 += yi;
		if(xi%2 == 1 and yi%2 == 0) n3++;
		if(xi%2 == 0 and yi%2 == 1) n4++;

	}

	if (s1%2 == 0 and s2%2 == 0)
	{
		cout << 0 << endl;
		return 0;
	}

	if (s1%2 == 1 and s2%2 == 1)
	{
		if (n3 > 0 or n4 >0)
		{
			cout << 1 << endl;
			return 0;
		}

		else{
			cout << -1 << endl;
			return 0;
		}
	}

	if (s1%2 == 0 or s2%2 == 0)
	{
		cout << -1 << endl;
		return 0;
	}
}