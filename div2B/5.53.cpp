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

// My templates
struct reverse
{
	bool operator()(const int &left, const int &right){
		return (right < left);
	}
};

struct custom
{
	bool operator()(const pair<int,int> &left, const pair<int,int> &right){
		return (left.first > right.first);
	}
};

bool taxi(string num){
	num.erase(2,1); num.erase(4,1); 
	char c = num[0];
	for (int i = 0; i < 6; ++i)
	{
		if (c != num[i])
		{
			return false;
		}
	}
	return true;
}
bool pizza(string num){
	num.erase(2,1); num.erase(4,1); 
	int prev = 10;
	for (int i = 0; i < 6; ++i)
	{	
		int curr = num[i] - '0';
		if (curr >= prev)
		{
			return false;
		}
		prev = curr;
	}
	return true;
}
void solve(){
	int n; cin >> n;
	int m[3]; fill(m, m + 3, 0);
	vector<string> names(n);
	int **v = new int * [n];
	for (int i = 0; i < n; ++i)
	{
		v[i] = new int[3]; fill(v[i], v[i] + 3, 0);
	}

	for (int i = 0; i < n; ++i)
	{
		int s; string name; cin >> s >> names[i];
		for (int j = 0; j < s; ++j)
		{
			string num; cin >> num;
			if (taxi(num)) v[i][0]++;
			else if(pizza(num)) v[i][1]++;
			else v[i][2]++;
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (v[j][i] > m[i])
			{
				m[i] = v[j][i];
			}
		}
	}
	vector<vector<string> > r(3);
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (v[j][i] == m[i])
			{
				r[i].push_back(names[j]);
			}
		}
	}
	cout << "If you want to call a taxi, you should call: ";
	cout << r[0][0];
	for (int i = 1; i < r[0].size(); ++i)
	{
		cout << ", " << r[0][i];
	}
	cout << '.' << endl;
	cout << "If you want to order a pizza, you should call: ";
	cout << r[1][0];
	for (int i = 1; i < r[1].size(); ++i)
	{
		cout << ", " << r[1][i];
	}
	cout << '.' <<endl;
	cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
	cout << r[2][0];
	for (int i = 1; i < r[2].size(); ++i)
	{
		cout << ", " << r[2][i];
	}
	cout << '.' <<endl;
}	

int main(int argc, char const *argv[]){
	// freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
	solve();
	return 0;
}