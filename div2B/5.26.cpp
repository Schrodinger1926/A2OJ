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

void solve(){
	int n, m; cin >> n >> m;
	int a[n], b[m];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	for (int i = 0; i < m; ++i)
	{
		cin >> b[i];
	}
	int counter = 0;

	for (int i = 0, j = 0; i < n and j < m; j++)
	{
		if (a[i] <= b[j])
		{
			counter++;
			i++;
		}
	}

	cout << n - counter << endl;
	return;

}	

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}
