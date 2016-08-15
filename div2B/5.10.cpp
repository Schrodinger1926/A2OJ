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
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
	string s; cin >> s;
	int n; cin >> n;
	int alphabet[26];
	for (int i = 0; i < 26; ++i)
	{
		cin >> alphabet[i];
	}

	int counter = 0;
	// order of pre-defined string cannot be changed
	for (int i = 0; i < s.size(); ++i)
	{
		counter += (i + 1)*alphabet[s[i] - 'a'];
	}
	
	// Accumulate objective value of new inserted maximum weight string
	int maxiWeight = *max_element(alphabet, alphabet + 26);
	for (int i = s.size(); i < s.size() + n; ++i)
	{
		counter += (i+1)*maxiWeight;
	}

	cout << counter << endl;



	return 0;		
}