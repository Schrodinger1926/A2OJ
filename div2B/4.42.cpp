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

void solve(){
	string a, b; cin >> a >> b;
	int gvnSheets[26], nedSheets[26]; fill(gvnSheets, gvnSheets + 26, 0); fill(nedSheets, nedSheets + 26, 0);
	for (int i = 0; i < a.size(); ++i) gvnSheets[a[i] - 'a']++;
	for (int i = 0; i < b.size(); ++i) nedSheets[b[i] - 'a']++;
	int area = 0;
	for (int i = 0; i < 26; ++i)
	{
		if (gvnSheets[i] == 0 and nedSheets[i] != 0)
		{
			cout << -1 << endl;
			return;
		}
		area += min(gvnSheets[i], nedSheets[i]);
	}
	cout << area << endl;
	return;
}	

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}