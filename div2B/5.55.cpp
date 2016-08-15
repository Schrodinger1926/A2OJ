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

void solve(){
	int n, m ; cin >> n >> m;
	// make adjacency list
	vector<vector<int> > adj(n);
	for (int i = 0; i < m; ++i)
	{
		int u, v; cin >> u >> v;
		adj[u-1].push_back(v-1);
		adj[v-1].push_back(u-1);
	}
	//brute force
	int counter = 0; bool isCyclic = false;
	while (!isCyclic){
		isCyclic = true;
		bool isStudentFound = false;
		vector<pair<int,int> > e;
		// locate
		for (int i = 0; i < adj.size(); ++i)
		{
			if (adj[i].size() == 1)
			{
				e.push_back(make_pair(adj[i][0], i));
				isStudentFound = true;
			}
		}
		counter += isStudentFound;
		// trim
		for (int i = 0; i < e.size(); ++i)
		{
			int u = get<0>(e[i]), v = get<1>(e[i]);
			adj[u].erase(remove(adj[u].begin(), adj[u].end(), v), adj[u].end());
			adj[v].erase(remove(adj[v].begin(), adj[v].end(), u), adj[v].end());
		}
		// check-new list for leaves
		for (int i = 0; i < adj.size(); ++i)
		{
			if (adj[i].size() == 1)
			{
				isCyclic = false;
			}
		}
	}
	cout << counter << endl;
		
}	

int main(int argc, char const *argv[]){
	// freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
	solve();
	return 0;
}