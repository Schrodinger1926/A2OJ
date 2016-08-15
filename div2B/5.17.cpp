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

int magic[3][3];

bool verify(int i){
	int M = i + magic[1][0] + magic[2][0];
	// cout << "M: " << M << endl;
	int x = i;
	int y = M - magic[0][1] - magic[2][1];
	int z = M - magic[0][2] - magic[1][2];
	int a[] = {0, x, y, z};
	if (M != x + y + z)
	{
		return false;
	}
	// check
	for (int k = 0; k < 3; ++k)
	{
		int s1 = 0;
		int s2 = 0;
		for (int j = 0; j < 3; ++j)
		{
			if (k == j)
			{
				s1 += a[k+1];
				s2 += a[k+1];
			}
			else
			{
				s1 += magic[k][j]; 
				s2 += magic[j][k];
			}
		}
		// cout << s1 << " " << s2 << " " << M << endl;
		if (s1 != M or s2 != M ) return false;
	}
	// cout <<a[0]<<" " <<x << " " << y << " " << z << endl;	

	if (x > 0 and y > 0 and z > 0) return true;

	return false;
}


void solve(){
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cin >> magic[i][j];
		}
	}

	for (int i = 1; i <= 100000; ++i)
	{	//cout << "AT: " << i << endl;
		
		if (verify(i))
		{	int M = i + magic[1][0] + magic[2][0];
			int x = i;
			int y = M - magic[0][1] - magic[2][1];
			int z = M - magic[0][2] - magic[1][2];
			int p[] = {x, y, z};
			for (int j = 0; j < 3; ++j)
			 {
			 	magic[j][j] = p[j];
			 } 

			for (int k = 0; k < 3; ++k)
			{
				for (int l = 0; l < 3; ++l)
				{
					cout << magic[k][l] << " ";
				}
				cout << endl;
			}
			return;
		}
	}
}

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}