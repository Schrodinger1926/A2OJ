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
	set<int> verticalSet, horizonSet;
	for (int i = 0; i < n; ++i)
	{
		int x, y; cin >> x >> y;
		verticalSet.insert(x);
		horizonSet.insert(y);
	}

	cout << min(verticalSet.size(), horizonSet.size()) << endl;
	return 0;		
}