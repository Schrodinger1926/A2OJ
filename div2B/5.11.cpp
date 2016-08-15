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
	long double r, x1, y1, x2, y2; cin >> r >> x1 >> y1 >> x2 >> y2;
	cout << ceil(sqrt(pow((x2-x1), 2) + pow((y2-y1), 2))/(2*r)) << endl;
	return 0;
}