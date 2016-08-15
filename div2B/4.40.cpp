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
	int n; cin >> n;
	cout << n << " ";
	if (n == 1) return;
	while (n > 1){
		bool flag = false;
		for (int i = 2; i <= sqrt(n); ++i)
		{
			// cout << "AT: " << i << endl;
			if (n%i == 0)
			{
				n = n/i;
				cout << n << " ";
				flag = true;
				break;
			}
		}

		n = flag == false ? 1 : n;
	}
	cout << 1 << endl;
}	

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}