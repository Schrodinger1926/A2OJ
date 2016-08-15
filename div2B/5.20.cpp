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
void solve(){
	string s; cin >> s;
	// check if palindrome can be formed after rearrangment
	int alphabet[26];
	fill(alphabet, alphabet + 26, 0);
	for (int i = 0; i < s.size(); ++i)
	{
		alphabet[s[i] - 'a']++;
	}

	// Pass2: check all are even if n is even and only one odd if n is odd
	int odd = 0, even = 0;
	for (int i = 0; i < 26; ++i)
	{
		alphabet[i]%2? odd++: even++; 
	}

	if ((s.size()%2 == 0 and odd == 0) or (s.size()%2 == 1 and odd == 1))
	{
		cout << "First" << endl;
		return;
	}

	s.size()%2 ? cout << "First" << endl : cout << "Second" << endl;
	return;

}

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}
