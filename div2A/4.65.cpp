#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
	int y, k, n; cin >> y >> k >> n;
	bool flag = true;
	for (int i = 1; i <= n/k ; ++i)
	{	
		int x = k*i - y;
		if (x > 0){ cout << x << " "; flag = false; }
	}
	if (flag) cout << -1 << endl;
	else cout << endl;
}