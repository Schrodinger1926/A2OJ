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
	queue<int> myqueue;
	for (int i = 0; i < 10; ++i)
	{
		myqueue.push(i);
	}
	for (int i = 0; i < 10; ++i)
	{
		cout << myqueue.front() << ' ';
		myqueue.pop();
	}	
	cout << endl;
}	

int main(int argc, char const *argv[]){
	// freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
	solve();
	return 0;
}