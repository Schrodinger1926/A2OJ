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
struct reverse
{
	bool operator()(const int &left, const int &right){
		return (right < left);
	}
};

char **board;
int consume(int i, int j){
	// check if any pig is available
	int dx[] = {-1, 1, 0, 0};
	int dy[] = { 0, 0, -1, 1};
	for (int k = 0; k < 4; ++k)
	{
		if (board[i + dx[k]][j + dy[k]] == 'P')
		{
			return 1;
		}
	}
	return 0;
}
void solve(){
	int n, m; cin >> n >> m;
	// declare and initialize board
	board = new char *[n + 2];
	for (int i = 0; i < n + 2; ++i){
		board[i]  = new char[m + 2];
		fill(board[i], board[i] + m + 2, '.');
	}


	for (int i = 1; i < n + 1; ++i)
	{
		for (int j = 1; j < m + 1; ++j)
		{
			cin >> board[i][j];
		}
	}

	// simply check available pig for each wolf
	int counter = 0;
	for (int i = 1; i < n + 1; ++i)
	{
		for (int j = 1; j < m+1; ++j)
		{
			if (board[i][j] == 'W') counter += consume(i,j);
		}
	}

	cout << counter << endl;
}	

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}