#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
char **board;
// void check(int i, int j){
// 	int idx[2] = {-1,1};
// 	char p = board[i][j];
// 	for (int k = 0; k < 2; ++k)
// 	{
// 		if (board[i][j + idx[k]] == p or board[i+idx[k]][j] == p)
// 			{	
// 				cout << "Fault at (" << i << ", " << j << ")" << endl; 
// 				return;
// 			}	
// 		if (board[i][j + idx[k]] == p or board[i+idx[k]][j] == p)
// 			{
// 				cout << "Fault at (" << i << ", " << j << ")" << endl; 
// 				return;
// 			}
// 	}

// }
void placeMan(int i, int j){
	// Search adjacent cells
	int idx[] = {-1};
	for (int k = 0; k < 1; ++k)
	{
		if (board[i][j + idx[k]] == 'B' or board[i+idx[k]][j] == 'B')
			{
				// place W
				board[i][j] = 'W';
				return;
			}	
		if (board[i][j + idx[k]] == 'W' or board[i+idx[k]][j] == 'W')
			{
				// place B
				board[i][j] = 'B';
				return;
			}
	}

	board[i][j] = 'B';
	return;
}

int main(int argc, char const *argv[])
{
	int n, m;
	cin >> n >> m;
	char boardOriginal[n+2][m+2];
	board = new char *[n + 2];
	for (int i = 0; i < n+2; ++i)
	{
		board[i] = new char[m+2];
	}

	// Initialisation
	for (int i = 0; i < n + 2; ++i)
	{
		for (int j = 0; j < m + 2; ++j)
		{
			if (i == 0 or i == n + 1 or j == 0 or j == m + 1)
			{
				boardOriginal[i][j] = '-';
				board[i][j] = '-';
			}
			else{
				cin >> boardOriginal[i][j];
			}
		}
	}

	// Stack up all players on board
	for (int i = 1; i < n+1; ++i)
	{
		for (int j = 1; j < m+1; ++j)
		{
			placeMan(i,j);
		}
	}

	// Integrate
	for (int i = 1; i < n+1; ++i)
	{
		for (int j = 1; j < m+1; ++j)
		{
			if (boardOriginal[i][j] == '-') board[i][j] = boardOriginal[i][j];
		}
	}	

	// Verify
	// for (int i = 1; i < n + 1; ++i)
	// {
	// 	for (int j = 1; j < m + 1; ++j)
	// 	{
	// 		if (board[i][j] == 'B' or board[i][j] == 'W') check(i,j);
	// 	}
	// }

	// Display
	for (int i = 1; i < n + 1; ++i)
	{
		for (int j = 1; j < m + 1; ++j)
		{
			cout << board[i][j];
		}
		cout << endl;
	}
	
}	

