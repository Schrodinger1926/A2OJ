#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(int argc, char const *argv[])
{	
	int n, temp, cntOdd = 0, cntEven = 0, idxOdd, idxEven;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{	
		cin >> temp;
		if (temp%2 == 0)
		{
			cntOdd += 1;
			idxOdd = i + 1;
		}
		else{
			cntEven += 0;
			idxEven = i + 1;
		}

	}

	if (cntOdd == 1)
	{
		cout << idxOdd << endl;
		return 0;
	}

	cout << idxEven << endl;
	return 0;



}
