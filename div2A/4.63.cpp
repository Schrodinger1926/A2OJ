#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, k; cin >> n >> k;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i == j) cout << k << " ";
			else cout << 0 << " ";
		}
		cout << endl;
	}

}