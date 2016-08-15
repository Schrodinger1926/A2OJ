#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int n;
int getCount(int r, int c, char **board){
	// get adjacent cells
	int count = 0;
	
	// check adjacent cells
	int move[2] = {-1 , 1};
	for (int i = 0; i < 2 ; ++i)
	{
	
		if(board[r+move[i]][c] == 'o') count += 1 ;
	}

	for (int i = 0; i < 2; ++i)
	{
		if(board[r][c+move[i]] == 'o') count += 1 ;
	}

	// check if cell is corner, if yes then subtract 2 from it
	if ((r == 1 or r == n) and (c == 1 or c == n))
	{
		return count - 2;
	}

	if (r == 1 or r == n or c == 1 or c == n)
	{
		return count - 1;
	}

	return count;
}

int main(int argc, char const *argv[])
{	
	char temp;
	cin >> n;
	
	// Pass VL 2D Array by reference
	char **board;
	board = new char *[n+2];
	for (int i = 0; i < n+2; ++i)
	{
		board[i] = new char[n+2];
	}

	// fill(*board[0][0],*board[0][0] + sizeof(board), 'o');
	for (int i = 0; i < n+2; ++i)
	{
		for (int j = 0; j < n+2; ++j)
		{
			board[i][j] = 'o';
		}
	}
	

	for (int i = 1; i < n+1; ++i)
	{
		for (int j = 1; j < n+1; ++j)
		{
			cin >> temp;
			board[i][j] = temp;
		}
	}
	
	for (int i = 1; i < n+1; ++i)
	{
		for (int j = 1; j < n+1; ++j)
		{	
			// cout << "Point: "<< i << ","<< j << ": "<< getCount(i,j, board) << " "; 
			if (getCount(i,j, board) % 2 !=0) {
				cout << "NO" << endl;
				return 0;
			}	
		}
	}

	cout << "YES" << endl;
	return 0;
}
