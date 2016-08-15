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
int *h; int n;
// My templates
struct reverse
{
	bool operator()(const int &left, const int &right){
		return (right < left);
	}
};

int sections(int i){
	// go right
	int counter = 1, k, height;
	k = i + 1; height = h[i];
	while (k < n and h[k] <= height){
		counter++;
		height = h[k];
		k++;
	}
	// go left
	k = i - 1; height = h[i];
	while (k >= 0 and h[k] <= height){
		counter++;
		height = h[k];
		k--;
	}
	return counter;

}
void solve(){
	cin >> n;
	h = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> h[i];
	}
	int m = 1;
	for (int i = 0; i < n; ++i)
	{	
		int s = sections(i);
		if (s > m)
		{
			m = s;
		}
	}
	cout << m << endl;
}	

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}