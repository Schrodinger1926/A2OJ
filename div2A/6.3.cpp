#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m;
	cin >> n >> m;	
	int a[n+m+1];
	if (n-m > 1)
	{
		cout << -1 << endl;
		return 0;
	}
	else if (n - m == 1){
		a[0] = 0;
		for (int i = 1; i < n+m; ++i)
		{
			a[i] = i%2;
		}
	}

	else if (m == n){
		for (int i = 0; i < n+m; ++i)
		{
			a[i] = i%2;
		}
	}

	else if (m > n){
		if (m == 2*n)
		{
			// place one one zero sequence
			for (int i = 0; i < n+m;)
			{
				a[i] = 1;
				a[i+1] = 1;
				a[i+2] = 0;
				i +=3;
			}
		}

		else if (m < 2*n){
			for (int i = 0; i < 3*(m-n);)
			{
				a[i] = 1;
				a[i+1] = 1;
				a[i+2] = 0;
				i +=3;
			}

			for (int i = 3*(m-n); i < n+m;)
			{
				a[i] = 1;
				a[i+1] = 0;
				i += 2;
			}
		}
		else if (m > 2*n){
			if (m - 2*n <= 2)
			{
				for (int i = 0; i < n+m;)
				{
					a[i] = 1;
					a[i+1] = 1;
					a[i+2] = 0;
					i +=3;
				}

			}
			else{
				cout << -1 << endl;
				return 0;
			}	
		}
	
	}

	// Test suite

	// int ones = 0, zeros = 0;
	// for (int i = 0; i < n+m; ++i)
	// {
	// 	if (a[i] == 0)
	// 	{
	// 		zeros += 1;
	// 	}
	// 	else{
	// 		ones += 1;
	// 	}
	// }
	// // zeros
	// for (int i = 1; i < n+m; ++i)
	// {
	// 	if (a[i] == 0 and a[i-1] == 0)
	// 	{
	// 		cout << "Two adjacent zeros found at " << i << ' ' <<i-1 << endl;
	// 		break;
	// 	}
	// }

	// for (int i = 2; i < n+m; ++i)
	// {
	// 	if (a[i] == 1 and a[i-1] == 1 and a[i-2] == 1)
	// 	{
	// 		cout << "Three ones found in a row" << endl;
	// 	}
	// }


	// cout << "Testing Complete !" << endl;
	// cout << zeros << ' ' << ones << endl;

	for (int i = 0; i < n+m; ++i)
		{
			cout << a[i];
		}
		cout << '\n';
	
	return 0;
}
