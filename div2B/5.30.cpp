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
// int N = 1001;
struct reverse
{
	bool operator()(const int &left, const int &right){
		return (right < left);
	}
};

void solve(){
	int n, m; cin >> n >> m;
	int checker[1001]; fill(checker, checker + 1001, 0);
	for (int i = 0; i < m; ++i)
	{
		int u, v; cin >> u >> v;
		checker[u] = 1; checker[v] = 1;
	}
	// locate free hinges
	int hinge;
	for (int i = 1; i < 1001; ++i)
	{
		if (checker[i] == 0)
		{
			hinge = i;
			break;
		}
	}

	// *********************output**********************
	cout << n - 1 << endl;
	for (int i = 1; i <= n; ++i)
	{
		if (i != hinge)
			{
				cout << hinge << " " << i << endl;
			}	
	}
	return;

}	

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}