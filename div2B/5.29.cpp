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
struct customize
{
	bool operator()(const int &left, const int &right){
		return (right < left);
	}
};

void solve(){
	int n, m; cin >> n >> m;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		int x; cin >> x;
		if (x <= 0) v.push_back(abs(x));
	}
	sort(v.begin(), v.end(), customize());
	int counter = 0;
	for (int i = 0; i < min(m, (int)v.size()) ; ++i)
	{
		counter += v[i];
	}
	cout << counter << endl;
}	

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}
