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

struct reverse
{
	bool operator()(const int &left, const int &right){
		return (right < left);
	}
};

void solve(){
	int n, m; cin >> n >> m;
	int c[n+1], f[n+1]; fill(f, f + n + 1, 0); fill(c, c + n + 1, 0);
	for (int i = 0; i < m; ++i)
	{
		int x[3]; bool flag = true;
		for (int j = 0; j < 3; ++j) cin >> x[j];
		for (int j = 0; j < 3; ++j)
		{
			if (c[x[j]] != 0)
			{
				// c[x[j]] == 1 ? c[x[(j+1)%3]] = 2, c[x[(j+2)%3]] = 3 : c[x[j]] == 2 ? c[x[(j+1)%3]] = 3, c[x[(j+2)%3]] = 1: c[x[(j+1)%3]] = 1, c[x[(j+2)%3]] = 2 ;
				if (c[x[j]] == 1)
				{
					c[x[(j+1)%3]] = 2;  c[x[(j+2)%3]] = 3; 
				}
				if (c[x[j]] == 2)
				{
					c[x[(j+1)%3]] = 3;  c[x[(j+2)%3]] = 1; 
				}
				if (c[x[j]] == 3)
				{
					c[x[(j+1)%3]] = 1;  c[x[(j+2)%3]] = 2; 
				}

				flag = false;
				break;
			}

		}

		if (flag){
			for (int j = 0; j < 3; ++j)
			{
				c[x[j]] = j + 1;
			}
		}
	}	

	for (int i = 1; i <= n; ++i)
	{
		cout << c[i] << " ";
	}
	cout << endl;
	
}	

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}