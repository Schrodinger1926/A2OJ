#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(int argc, char const *argv[])
{	
	int r, c;
	char temp;
	cin >> r >> c;
	int rows[r], columns[c];

	// initialize all rows and columns to 1
	fill_n(rows, r, 1);
	fill_n(columns, c, 1);	

	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			cin >> temp;
			if (temp == 'S')
			{	// never to pick this row and column number
				rows[i] = 0;
				columns[j] = 0;
			}
		}
	}

	int cntRows = 0, cntColumns = 0;
	for (int i = 0; i < r; ++i)
	{
		if (rows[i] == 1) cntRows += 1;
	}

	for (int i = 0; i < c; ++i)
	{
		if (columns[i] == 1) cntColumns += 1;
	}

	cout << cntRows*c + cntColumns*r - cntRows*cntColumns << endl;
}
