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
	string num; cin >> num;
	int svn = 0, fr = 0, nn = 0;
    for (int i = 0; i < num.size(); ++i)
    {
    	num[i] == '7' ? svn++ : num[i] == '4' ? fr++: nn++ ;
    }

    if (nn == num.size())
    {
    	cout << -1 << endl;
    	return;
    }

    cout << (fr >= svn ? 4 : 7) << endl;
    return; 
}	

int main(int argc, char const *argv[]){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	solve();
	return 0;
}