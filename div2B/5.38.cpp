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
	int n, m, d; cin >> n >> m >> d;
	int a[n*m];
	cin >> a[0];
	int m_ = a[0]%d;
	for (int i = 1; i < n*m; ++i) {
		cin >> a[i];
		if (a[i]%d != m_)
		{
			cout << -1 << endl;
			return;
		}
	}
	sort(a, a + n*m);
	int median = a[(n*m - 1)/2];
	int moves = 0;
	for (int i = 0; i < n*m; ++i)
	{
		moves += abs(a[i] - median)/d;
	}
	cout << moves << endl;

	

}	

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}