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

int main(int argc, char const *argv[]){
	int n, s, t; cin >> n >> s >> t;
	int a[n+1];
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}

	int counter = 0;
	int nxt;
	while (s > 0 and s != t)
	{
		nxt = a[s];
		a[s] = 0;
		s = nxt;
		counter++;
	}
	counter = s > 0 ? counter : -1;
	cout << counter << endl;
	return 0;
}


