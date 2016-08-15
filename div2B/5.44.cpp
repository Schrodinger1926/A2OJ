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
	int m, n; cin >> m >> n;
	int requiredTime[m][n]; 
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> requiredTime[i][j];
		}
	}
	int completionTime[m]; fill(completionTime, completionTime + m, 0);
	for (int i = 0; i < n; ++i)
	{	
		int freeAt = 0;
		for (int j = 0; j < m; ++j)
		{
			int start = max(freeAt, completionTime[j]);
			completionTime[j] = start + requiredTime[j][i];
			freeAt = completionTime[j];
		}
	}
	for (int i = 0; i < m; ++i)
	{
		cout << completionTime[i] << " ";
	}
	cout << endl;


	
}	

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}