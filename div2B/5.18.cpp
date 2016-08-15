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

int **B;
int n, m;
void placeZero(int row, int col){
	for (int i = 0; i < m; ++i)
	{
		B[row][i] = 0;
	}
	for (int i = 0; i < n; ++i)
	{
		B[i][col] = 0;
	}
}

bool placeOne(int row, int col){
	bool flag = false;
	for (int i = 0; i < m; ++i)
	{
		if (B[row][i] != 0){
			B[row][i] = 1;
			flag = true;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (B[i][col] != 0){
			B[i][col] = 1;
			flag = true;
		}
	}

	return flag;
}
void solve(){
	cin >> n >> m;
	int A[n][m];
	B = new int *[n];
	for (int i = 0; i < n; ++i)
	{
		B[i] = new int[m];
	}
	// initalize B
	for (int i = 0; i < n; ++i)
	{
		fill(B[i], B[i] + m, -1);
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> A[i][j];
			if (A[i][j] == 0) placeZero(i,j);
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (A[i][j] == 1 and !placeOne(i,j)){
				cout << "NO" << endl;
				return;
			}
		}
	}

	// display
	cout << "YES" << endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << B[i][j] << " ";
		}
		cout << endl;
	}

}

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}