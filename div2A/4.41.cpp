#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{	
	long long l, r;
	cin >> l >> r;

	if (l%2 == 1)
	{
		if (r - l + 1 <= 3) cout << -1 << endl;
		else cout << l + 1 << " " << l + 2 << " " << l + 3 << endl;
	}
	else{
		if (r - l + 1 < 3) cout << -1 << endl;
		else cout << l  << " " << l + 1 << " " << l + 2 << endl;
	}

	return 0;
}	