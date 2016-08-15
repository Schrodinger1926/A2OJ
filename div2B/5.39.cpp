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
	int n, k; cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; ++i) cin >> a[i];
	int t = ceil(n/k), m = INT_MAX, ti = 0, idx;
	for (int i = 0; i < k; ++i)
	{	
		int mi = 0;
		for (int j = 0; j < t; ++j)
		{
			mi += a[(i + j*k)%n];
		}

		if (mi < m)
		{
			m = mi;
			idx = i;
		}
	}
	cout << idx + 1 << endl;
}	

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}