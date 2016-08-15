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

// My templates
struct reverse
{
	bool operator()(const int &left, const int &right){
		return (right < left);
	}
};

void solve(){
	int  a, b, c, d; cin >> a >> b >> c >> d;
	double s1 = double(b)/a, s2 = double(d)/c;
	if (s2 < s1)
	{
		// horizontal fill in first
		int g = __gcd(b*c - a*d, b*c);
		cout << (b*c - a*d)/g << '/' << (b*c)/g << endl;
		return;
	}
	if (s2 > s1)
	{
		// vertical will fill first
		int g = __gcd(a*d - b*c, a*d);
		cout << (a*d - b*c)/g << '/' << (a*d)/g << endl;
		return;
	}
	cout << 0 << '/' << 1 << endl;
	return;

}

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}