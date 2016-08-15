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

vector<vector<int> > adj;
vector<pair<int,int> > I;
int node = 0;

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

void refresh(int a, int b, int node){
	// find connected nodes
	for (int i = 0; i < node; ++i)
	{
		int x = get<0>(I[i]), y = get<1>(I[i]);
		// check direction
		if ((a > x and a < y) or (b > x and b < y))
		{
			// can reach from (a,b) to (x,y)
			adj[node].push_back(i);
		}

		if ((x > a and x < b) or (y > a and y < b))
		{
			// can reach from (x,y) to (a,b)
			adj[i].push_back(node);
		}
	}
}

bool bfs(int n1, int n2 ){
	// find path from n1 to n2
	bool visit[node + 1]; fill(visit, visit + node + 1, false);
	queue<int> q;
	q.push(n1);
	while(!q.empty()){
		int u = q.front(); q.pop();
		if (u == n2) return true;
		for (int i = 0; i < adj[u].size(); ++i)
		{
			int v = adj[u][i];
			if (visit[v] == false){
				visit[v] = true;
				q.push(v);
			}
		}
		visit[u] = true;
	}
	return false;
}

void solve(){
	int n; cin >> n;
	for (int i = 0; i < n; ++i)
	{	
		int t, a, b; cin >> t >> a >> b;
		if (t == 1)
		{	// Insert node
			I.push_back(make_pair(a,b));
			vector<int> v;
			adj.push_back(v);
			refresh(a, b, node);
			node++;
		}
		else{
			// Answer query
			a--; b--;
			bfs(a, b) ? cout << "YES" << endl: cout << "NO" << endl;
		}
	}
}	

int main(int argc, char const *argv[]){
	// freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
	solve();
	return 0;
}