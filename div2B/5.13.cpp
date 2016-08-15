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
	int x, y, n; cin >> x >> y;
	cin >> n;
	int a[6] = {x, y, y-x, -x, -y, x-y};
	int b = ((a[(n-1)%6])%(1000000007) + 1000000007)%1000000007;
	cout << b << endl;
	return 0;
}


