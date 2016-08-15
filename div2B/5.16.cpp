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

void solve(){
	string s, t; cin >> s >> t;
	int cnt[26];
	// memset(cnt, 0, sizeof cnt);
	fill_n(cnt, 26, 0);
	// check if anagaram
	for (int i = 0, j = 0; i < s.size() and j < t.size(); ++i)
	{
		if (s[i] == t[j])
		{
			j++;
		}
		if (j == t.size()) {cout << "automaton" << endl; return;}
	}

	// check if only suffix array required or both
	for (int i = 0; i < s.size(); ++i)
	{
		cnt[s[i] - 'a']++;
	}
	for (int i = 0; i < t.size(); ++i)
	{
		cnt[t[i] -'a']--;
	}

	bool sufArray = true;
	bool both = true;
	for (int i = 0; i < 26; ++i)
	{	
		sufArray = sufArray and cnt[i] == 0;
		both = both and cnt[i] >= 0;
	}
	if (sufArray)
	{
		cout << "array" << endl;
		return;
	}
	if (both)
	{
		cout << "both" << endl;
		return;
	}

	cout << "need tree" << endl;
}

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}