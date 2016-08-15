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
	int n, k; cin >> n >> k;
	vector<pair<int,int> > v;
	for (int i = 1; i <= n; ++i)
	{	
		int x; cin >> x;
		v.push_back(make_pair(x, i));
	}
	sort(v.begin(), v.end(), custom());
	cout << get<0>(v[k-1]) << endl;
	for (int i = 0; i < k; ++i)
	{
		cout << get<1>(v[i]) << ' ';
	}
	cout << endl;
}

int main(int argc, char const *argv[]){
	freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
	solve();
	return 0;
}