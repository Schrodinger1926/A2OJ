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
int N = 1001;

void solve(){
	int p, q, l, r; cin >> p >> q >> l >>r;
	int chat[N]; fill(chat, chat + N, 0);

	for (int i = 0; i < p; ++i)
	{
		int li, ri; cin >> li >> ri;
		fill(chat + li, chat + ri + 1, 1);
	}

	int qLeft[q], qRight[q];
	for (int i = 0; i < q; ++i)
	{
		int li, ri; cin >> li >> ri;
		qLeft[i] = li;
		qRight[i] = ri;
	}
	int counter = 0;
	for (int i = l; i <= r; ++i)
	{	
		// cout << "AT: " << i << endl;
		for (int j = 0; j < q; ++j)
		{	
			bool flag = true;
			for (int k = qLeft[j]; k <= qRight[j]; ++k)
			{
				if (k + i < N and chat[k + i] == 1)
				{
					counter++;
					flag = false;
					break;
				}
			}
			if (flag == false) break;
		}
	}

	cout << counter << endl;
}	

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}
