#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{	
	int n;
	cin >> n;
	char square[n][n], temp;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> temp;
			square[i][j] = temp;
		}
	}

	char d = square[0][0];
	char nd = square[0][1];
	if (d == nd)
	{
		cout << "NO" << endl;
		return 0;
	}
	for (int i = 0; i < n; ++i)
	{	
		for (int j = 0; j < n; ++j)
		{
			if ((abs(float(i + 1)/(j + 1)) == 1 or abs(float(i + 1 - n - 1)/(j + 1)) == 1) and square[i][j] != d){
			 cout << "NO" << endl; 
			 return 0;
			}
			if ((abs(float(i + 1)/(j + 1)) != 1 and abs(float(i + 1 - n - 1)/(j + 1)) != 1) and square[i][j] != nd){
			 cout << "NO" << endl; 
			 return 0;
			}

		}
	}

	cout << "YES" << endl;
	return 0;
}	