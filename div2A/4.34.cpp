#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(int argc, char const *argv[])
{	
	int n, c, now, prev = 0, m = 0;
	cin >> n >> c;

	for (int i = 0; i < n; ++i)
	{
		cin >> now;
		if (prev - now > m)
		{
			m  = prev - now;
		}

		prev = now;

	}

	if (m - c > 0) cout << m - c << endl;
	else cout << 0 << endl;

}
