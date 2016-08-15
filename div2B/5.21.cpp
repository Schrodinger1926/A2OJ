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
int N = 100001;
void solve(){
	int n, m; cin >> n >> m;
	int stairs[m];
	for (int i = 0; i < m; ++i)
	{
		cin >> stairs[i];
	}

	sort(stairs, stairs + m);
	if (stairs[0] == 1 or stairs[m - 1] == n)
	{
		cout << "NO" << endl;
	}
	else{
		for (int i = 0; i < m-2; ++i)
		{	// check three consecutive dirty steps
			if (stairs[i+2] - stairs[i+1] == 1 and stairs[i+1] - stairs[i] == 1)
			{
				cout << "NO" << endl;
				return;
			}
		}
		cout << "YES" << endl;
		return;
	}
}

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}