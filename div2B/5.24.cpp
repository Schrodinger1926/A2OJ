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
int N = 1001;

void solve(){
	int n, k; cin >> n >> k;
	int p[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> p[i];
	}

	int maxi = *max_element(p, p + n);
	int mini = *min_element(p, p + n);

	if (maxi - mini > k)
	{
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < mini; ++j)
		{
			cout << 1 << " ";
		}
		for (int j = mini, ki = 1; j < p[i]; ++j, ++ki)
		{
			cout << ki << " ";
		}
		cout << endl;
	}
	return;
}	

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}
