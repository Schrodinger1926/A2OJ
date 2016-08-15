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
	int n, h; cin >> n >> h;
	int l[n], r[n];
	int lower = 0, upper = 0;
	for (int i = 0; i < n; ++i)
		{
			cin >> l[i] >> r[i];
			lower += l[i]; upper += r[i];
		}
	if (h < lower or h > upper) {
		cout << "NO" << endl;
		return;
	}
	
	cout << "YES" << endl;
	// start fill
	int idx = 0;
	h -= lower;
	while(h > 0){
		idx = idx%n;
		if (l[idx] < r[idx]){
			l[idx]++;
			h--;
		}
		idx++;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << l[i] << " ";
	}
	cout << endl;
}	

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}