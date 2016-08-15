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
	int n, m; cin >> n >> m;
	vector<int> res;
	if (m%2 == 1)
	{
		// if odd add centeral element
		res.push_back((m/2) + 1);
	}
	// even number of places are left to be filled
	int i = 1;
	vector<int> first;
	vector<int> second;
	while(i <= m/2){
		first.push_back(i);
		second.push_back(m + 1 - i);
		i++;
	}
	// fill response
	for (int i = (m/2) - 1 ; i >= 0; --i)
	{
		res.push_back(first[i]);
		res.push_back(second[i]);

	}

	for (int i = 0; i < n; ++i)
	{
		cout << res[i%m] << endl;
	}

}	

int main(int argc, char const *argv[]){
	// freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
	solve();
	return 0;
}