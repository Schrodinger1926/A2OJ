#include <iostream>
#include <vector>
#include <string>

using namespace std;
int n, k;
bool check(int a2){
	// find if some combo of 3,4,5 exists

	for (int a3 = 0; a3 <= n; ++a3)
	{
		for (int a4 = 0; a4 <= n; ++a4)
		{
			for (int a5 = 0; a5 <= n; ++a5)
			{
				if (3*a3 + 4*a4 + 5*a5 == k - 2*a2 and a3 + a4 + a5 + a2== n)
				{
					return true;
				}
			}
		}
	}

	return false;
}

int main(int argc, char const *argv[])
{
	cin >> n >> k;
	// iterate to find the minimum 
	for (int a2 = 0; a2 <= n; ++a2)
	{	
		if (check(a2)) { cout << a2 << endl; return 0; }
	}
}