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
int N = 100001;
void solve(){
	int n; cin >> n;
	int home[N], away[N];
	int homeColor[n], awayColor[n];
	fill(home, home + N, 0);
	fill(away, away + N, 0);
	for (int i = 0; i < n; ++i)
		{
			cin >> homeColor[i] >> awayColor[i];
			home[homeColor[i]]++;
			away[awayColor[i]]++;
		}
	for (int i = 0; i < n; ++i)
	{
		cout << (n-1) + home[awayColor[i]] << " " << (n-1) - home[awayColor[i]] << endl;
	}
}

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}