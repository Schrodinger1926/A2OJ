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
	int n, m, s, f; cin >> n >> m >> s >> f;
	s -= 1;
	f -= 1;
	string res = "";
	int d = f > s ? 1 : -1;
	int i = 1;
	int t, l, r;
	cin >> t >> l >> r;
	int counter = 1;
	while (true)
	{
		if (s == f) break;

		if (i > t and counter <= m - 1){
			cin >> t >> l >> r;
			counter++;
		}

		if (t == i){
			// check wheather to make a move or not
			if ((l-1 <= s and s <= r-1) or (l-1 <= s + d and s + d <= r-1)) res += 'X';

			else{
				// make a move
				s += d;
				res += d == 1 ? 'R': 'L';
			}
		}
		else{
			// detective is not watching anyone
			s += d;
			res += d == 1 ? 'R': 'L';
		}
		
		i++;
	}
	cout << res << endl;

}	

int main(int argc, char const *argv[]){
	// freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
	solve();
	return 0;
}