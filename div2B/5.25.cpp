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
// int N = 1001;

void solve(){
	int n; cin >> n;
	vector<int> x;
	vector<int> y;
	string last;
	for (int i = 0; i < n; ++i)
	{
		int temp; cin >> temp;
		temp > 0 ? x.push_back(temp) : y.push_back(-1*temp);
		last = temp > 0 ? "first" : "second";
	}

	long long int s1 = 0, s2 = 0;
	s1 = accumulate(x.begin(), x.end(), s1);
	s2 = accumulate(y.begin(), y.end(), s2);
	
	if (s1 > s2)
	{
		cout << "first" << endl;
		return;
	}

	if (s1 < s2){
		cout << "second" << endl;
		return;
	}

	for (int i = 0; i < min(x.size(), y.size()); ++i)
	{
		if (x[i] > y[i])
		{
			cout << "first" << endl;
			return;
		}
		if (x[i] < y[i])
		{
			cout << "second" << endl;
			return;
		}
	}

	cout << last << endl;
	return;

}	

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}
