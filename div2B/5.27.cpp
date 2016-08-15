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
	int n; cin >> n;
	int a[n+1]; a[n] = -1; // at the end we will always hit a bummer

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	
	if (n <= 2)
	{
		cout << n << endl;
		return;
	}

	int m = 2;
	for (int i = 0, j = 2; j <= n; j++)
	{	
		if (a[j] != a[j-1] + a[j-2])
		{
			m = j - i  >= m ? j - i : m;
			i = j - 1;
		}

	}

	cout << m << endl;

}	

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}
