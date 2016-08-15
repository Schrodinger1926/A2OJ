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

struct sortFirst
{
	bool operator()(const pair<int,int> &left, const pair<int,int> &right){
		return (right.first < left.first);
	}
};

struct sortSecond
{
	bool operator()(const pair<int,int> &left, const pair<int,int> &right){
		return (right.second < left.second);
	}
};

void solve(){
	int n; cin >> n;
	map<int, vector<int> > mymap;
	for (int i = 0; i < n; ++i)
	{
		int x; cin >> x;
		mymap[x].push_back(i);
	}
	vector<int> v;
	vector<pair<int, int> > result;
	for (map<int, vector<int> >::iterator  it = mymap.begin(); it != mymap.end() ; ++it) v.push_back(it->first);
	for (int i = 0; i < v.size(); ++i)
	{	
		vector<int> *post = &mymap[v[i]];
		if (post->size() == 1)
		{
			result.push_back(make_pair(v[i], 0));
			continue;
		}

		int j = 0, d = post->at(1) - post->at(0);
		while (j < post->size() - 1 and d == post->at(j+1) - post->at(j)){
			j++;
		}

		if (j == post->size() - 1) result.push_back(make_pair(v[i], d));

	}
	cout << result.size() << endl;
	for (int i = 0; i < result.size(); ++i)
	{
		cout << get<0>(result[i]) << " " << get<1>(result[i]) << endl;
	}

	return;




}	

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}