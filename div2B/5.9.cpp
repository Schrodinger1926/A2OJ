#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
	string n; cin >> n;
	int X2 = n[n.size() -1 ] - '0';
	int X1;
	int idx_X1 = -1;
	for (int i = 0; i < n.size() - 1; ++i)
	{	
		int num = n[i] - '0';
		if (num%2 == 0)
		{
			X1 = num;
			idx_X1 = i;
			if (num < X2)
			{
				cout << n.substr(0, i) << X2 << n.substr(i + 1 , n.size() - 2 - i) << X1 << endl;
				return 0;
			}
		}
	}
	idx_X1 == -1 ? cout << -1 << endl : cout << n.substr(0, idx_X1) << X2 << n.substr(idx_X1 + 1, n.size() -2 - idx_X1) << n[idx_X1] << endl;
	return 0;		
}