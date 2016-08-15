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
int N = 100001;

void solve(){
	int n, t; cin >> n >> t;
	int time[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> time[i];
	}
	int cumTime = 0;
	int m = 0;
	for (int i = 0, j = 0; i < n and j < n;)
	{	
		if (time[j] > t)
		{
			j++;
			i = j;
			cumTime = 0;
		}

		else if (cumTime + time[j] <= t)
		{	
			cumTime += time[j];
			if (j - i + 1 >= m)
			{
				m = j - i + 1;
				// cout << m << " ";
				// cout << '(' << i << ',' << j << ')' << endl;
				j++;

			}
		}

		else{
			cumTime -= time[i];
			i++;
		}
		// cout << m << " ";
		// cout << '(' << i << ',' << j << ')' << endl;


	}

	cout << m << endl;
	return;

}	

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}
