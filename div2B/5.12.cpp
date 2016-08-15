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
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	// locate starting point
	int i = 0;
	while (a[i] <= a[i+1] and i < n - 1){
		i++;
	}

	if (i == n-1)
	{
		cout << 0 << endl;
		return 0;
	}

	i++;
	// cout << "i: " << i << endl;

	for (int j = 0; j < n - 1; ++j)
	{
		if (a[(i+j)%n] >  a[(i+j+1)%n])
		{
			// cout << "idx: " << (i+j)%n << endl;
			cout << -1 << endl;
			return 0;
		}
	}

	cout << n - i << endl;
	return 0;
}
