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
		return (left.first < right.first);
	}
};

void solve(){
	int n, k; cin >> n >> k;
	if (n == k){
		cout << -1 << endl;
		return;
	}
	int i = 1;
	if ((n-k)%2)
	{	
		cout << 1 << ' ';
		i++;
	}
	while (i < n-k){
		cout << i + 1 << ' ' << i << ' ';
		i += 2;
	}
	while (i <= n){
		cout << i << ' ';
		i++;
	}
	cout << endl;

}

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}