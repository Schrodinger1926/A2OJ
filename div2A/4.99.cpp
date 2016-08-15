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
	int n; cin >> n;
	int a[101];
	fill_n(a, 101, 0);
	// put alexey's clothes on
	int l, r; cin >> l >> r;
	for (int j = l; j < r; ++j)
		{
			a[j] = 1;
		}

	// put other guys cloths on
	for (int i = 1; i < n; ++i)
	{
		int li, ri; cin >> li >> ri;
		for (int j = li; j < ri; ++j)
		{
			a[j] = 0;
		}

	}
	int counter = 0;
	cout << accumulate(a, a + 101, counter) << endl;
	return 0;		
}