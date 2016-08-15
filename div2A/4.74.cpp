#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
	int r1, r2, c1, c2, d1, d2;
	cin >> r1>> r2>> c1>> c2>> d1>> d2;
	int x1, x2, x3, x4;
	// brute force
	for (int i = 1; i <= 9; ++i)
	{
		x3 = i;
		x4 = r2 - x3;
		x2 = c2 - x4;
		x1 = r1 - x2;
		set<int> myset;
		// check if distint
		myset.insert(x1); myset.insert(x2); myset.insert(x3); myset.insert(x4);
		// verify
		if (x1 >0 and x1 < 10 and x2 > 0 and x2 < 10 and x3 > 0 and x3 < 10 and x4 > 0 and x4 < 10 and x1 + x4 == d1 and x3 + x2 == d2 and myset.size() == 4)
		{
			cout << x1 << " " << x2 << endl;
			cout << x3 << " " << x4 << endl;
			return 0;
		}
	}

	cout << -1 << endl;
	return 0;
}