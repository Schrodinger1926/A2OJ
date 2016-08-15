#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int m,s;
	cin >> m >> s;
	int high[m], low[m];
	if(s == 0 and m > 1){
		cout << -1 <<' ' << -1 << endl;
		return 0 ;
	}

	if(s == 0 and m == 1){
		cout << 0 << ' ' << 0 << endl;
		return 0;
	}
	if(float(s)/m <=9){
		for (int i = 0; i < m; ++i)
		{
			high[i] = min(9,s);
			s -= high[i];
		}

		reverse_copy(high,high + m,low);
		if(low[0] == 0){
			low[0] += 1;
			int j;
			for (j = 1; j < m; ++j)
			{
				if(low[j] > 0) break; 
			}

			low[j] -= 1;
		}
		for (int i = 0; i < m; ++i) cout << low[i];
		cout << ' ';
		for (int i = 0; i < m; ++i) cout << high[i];
		cout << endl;
		return 0;
	}

	if(s==0 and m == 1){
		cout << 0 << ' ' << 0 << endl;
		return 0;
	}
	cout << -1 << ' ' << -1 << endl;
	return 0;
}