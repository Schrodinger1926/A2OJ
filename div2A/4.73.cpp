#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) cin >> a[i];
	int m = 2147483647;
	int idx1, idx2;
	for (int i = 0; i < n; ++i)
	{
		if (abs(a[i%n] - a[(i+1)%n]) < m)
		{
			m = abs(a[i%n] - a[(i+1)%n]);
			idx1 = i%n; idx2 = (i+1)%n;
		}
	}
	cout << idx1 + 1<< " " << idx2 + 1 << endl;
	return 0;
}