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
#include <iomanip>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <vector>
using namespace std;

// My templates
struct reverse
{
	bool operator()(const int &left, const int &right){
		return (right < left);
	}
};

struct custom
{
	bool operator()(const pair<int,int> &left, const pair<int,int> &right){
		return (left.first > right.first);
	}
};

void solve(){
	int n1, m1; cin >> n1 >> m1;
	int one[n1][m1];
	for (int i = 0; i < n1; ++i)
	{	
		for (int j = 0; j < m1; ++j)
		{ 	
			char x; cin >> x;
			one[i][j] = x - '0';
		}
	}
	int n2, m2; cin >> n2 >> m2;
	int two[n2][m2];
	for (int i = 0; i < n2; ++i)
	{
		for (int j = 0; j < m2; ++j)
		{	
			char x; cin >> x;
			two[i][j] = x - '0';
		}
	}
	// brute force
	int res = 0;
	int xMax = 0, yMax = 0;
	for (int x = -49; x < 50; ++x)
	{
		for (int y = -49; y < 50; ++y)
		{
			// take shifted dot product
			int overLap = 0;
			for (int i = 0; i < n1; ++i)
			{
				for (int j = 0; j < m1; ++j)
				{	
					// check if arguments are sane
					if (i+x >=0 and i+x < n2 and j+y >=0 and j+y < m2) overLap += one[i][j]*two[i+x][j+y];
				}
			}
			if (overLap > res){
				res = overLap;
				xMax = x; yMax = y;
			}
		}
	}

	cout << xMax << ' ' << yMax << endl;

}	

int main(int argc, char const *argv[]){
	// freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
	solve();
	return 0;
}