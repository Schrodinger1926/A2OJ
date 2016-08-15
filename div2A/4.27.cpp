#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{	
	int n , d, temp, singTime = 0;
	cin >> n >> d;
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		singTime += temp;
	}
	int restTime = (n-1)*10;

	if (singTime + restTime  <= d)
	{
		cout << (d - singTime)/5 << endl;
		return 0;
	}
	cout << -1 << endl;
	return 0;

}