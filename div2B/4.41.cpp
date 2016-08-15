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

struct reverse
{
	bool operator()(const int &left, const int &right){
		return (right < left);
	}
};
vector<double> *v = new vector<double>();

bool unique(double si){;
	for (int i = 0; i < v->size(); ++i)
	{
		if (v->at(i) == si) return false;
	}

	return true;
}

void solve(){
	int n, counter = 0; double x, y; cin >> n >> x >> y;
	bool vertical = false;
	for (int i = 0; i < n; ++i)
	{
		double xi, yi, si; cin >> xi >> yi;
		if (xi == x)
		{
			vertical = true;
			continue;
		}
		xi = (x - xi); yi = (y - yi); si = yi/xi;
		if (unique(si))
		{
			counter++;
			v->push_back(si);
		}
	}
	counter += vertical ? 1 : 0;
	cout << counter << endl;
}	

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}