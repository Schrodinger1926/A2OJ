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
int N = 100001;
int *cumTime;
int n;
int binarySearch(int left, int right, int key){
	if (left < right)
	{
		int mid = (left + right)/2;
		if (cumTime[mid] < key)
		{
			return binarySearch(mid + 1, right, key);
		}
		if (cumTime[mid] == key)
		{
			return mid;
		}
		if (cumTime[mid] > key)
		{
			return binarySearch(left, mid - 1, key);
		}
	}

	else if (left == right)
	{
		if (cumTime[left] <= key)
		{
			return left;
		}
		return left - 1;
	}

	return right;`

}
void solve(){
	int t; cin >> n >> t;
	cumTime = new int[n + 1]; cumTime[0] = 0;
	for (int i = 1; i < n + 1; ++i)
	{	
		int temp; cin >> temp;
		cumTime[i] = cumTime[i - 1] + temp;
	}
	int m = 0;
	for (int i = 1; i < n + 1; ++i)
	{	
		int books = binarySearch(i, n, cumTime[i-1] + t) - (i - 1);
		// cout << "i: "<< i << " | books: " << books << endl;
		if (books > m)
		{
			m = books;
		}
	}

	cout << m << endl;
	return;
}	

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}
