#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, m; cin >> n >> m;
	int out[m];
	int ones = 0; int minusOnes = 0;
	for (int i = 0; i < n; ++i)
	{	
		int temp; cin >> temp;
		if (temp == 1) ones++;
		else minusOnes++;
	}
	
	// quiries
	for (int i = 0; i < m; ++i)
	{	
		int l, r; cin >> l >> r;
		int out = ((r - l + 1)%2 == 0 and ones >= (r - l + 1 )/2 and minusOnes >= (r - l + 1 )/2)? 1 : 0 ;
		cout << out << endl;
	}

	return 0;
}	