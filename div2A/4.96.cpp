#include <iostream>
#include <algorithm>
#include <cmath>
#include <limits>
// #define INT_MAX numeric_limits<int>::max()
// #define INT_MIN numeric_limits<int>::min()
using namespace std;

int main(int argc, char const *argv[]){
	int n, m, i , j , a, b;
	cin >> n >> m >> i >> j >> a >> b;
	int cornerX[] = {1, n, n, 1};
	int cornerY[] = {1, m, 1, m};

	// first check
	for (int k = 0; k < 4; ++k)
	{
		if (cornerX[k] == i and cornerY[k] == j)
		{
			cout << 0 << endl;
			return 0;
		}
	}

	// Now the point has to move surely, check if any move is possible or not
	if (1 + a > n or 1 + b > m)
	{
		cout << "Poor Inna and pony!" << endl;
		return 0;
	}
	
	// make moves
	int mini = INT_MAX;
	bool flag = false;
	for (int k = 0; k < 4; ++k)
	{	// incoporate both necessary and sufficient conditions
		int moveX = abs(cornerX[k] - i);
		int moveY = abs(cornerY[k] - j);
		if (moveX%a == 0 and moveY%b == 0 and (moveX/a)%2 == (moveY/b)%2)
		{
			flag = true;
			// cout << max(moveX/a, moveY/b) << endl;
			if (max(moveX/a, moveY/b) < mini ) mini = max(moveX/a, moveY/b);
		}

	}

	flag ? cout << mini << endl : cout << "Poor Inna and pony!" << endl;
	return 0;
}