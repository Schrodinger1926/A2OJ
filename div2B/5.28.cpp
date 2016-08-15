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
	vector<double> v;
	for (int i = 0; i < n; ++i)
	{
		double x; cin >> x;
		v.push_back(x);
	}
	struct customize
	{
		bool operator()(const int &left, const int &right){
			return (right < left);
		}
	};

	sort(v.begin(), v.end(), customize());
	
	if (n%2 == 1)
	{
		v.push_back(0);
	}

	double counter = 0;
	int i = 0;
	while (i < v.size() - 1){
		counter += pow(v[i], 2) - pow(v[i+1], 2);
		i += 2;
	}

	cout << setprecision(15) << 3.1415926536*counter << endl;
	return;
}	

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}
