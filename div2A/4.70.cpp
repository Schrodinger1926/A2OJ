#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, m; cin >> n >> m;
	bool flag = false;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			int temp; cin >> temp;
			if (temp == 1)
			{
				if (i == 0 or i == n-1 or j == 0 or j == m-1)
				{
					flag = true;
				}
			}
		}
	}
	if(flag) cout << 2 << endl;
	else cout << 4 << endl;
	return 0;
}	