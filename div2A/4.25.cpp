#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{	
	int n, m, k = 10001,i = 0;
	cin >> n >> m;
	while(i < k and (n - i*m < 0 or 2*i*m - n < 0)){
		i ++;
	}
	if (i == k)
	{
		cout << -1 << endl;
		return 0;
	}
	cout << i*m << endl;
	return 0;
}	