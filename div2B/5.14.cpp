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
	int prev; cin >> prev;
	int counter = prev;
	for (int i = 0; i < n-1; ++i)
	{
		int hi; cin >> hi;
		if (prev > hi)
		{
			counter += prev - hi + 1;
		}
		else{
			counter += hi - prev + 1;
		}
		prev = hi;
	}

	counter += n;
	cout << counter << endl;
	return 0;
}


