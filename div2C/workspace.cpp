// Need to figure this question yet
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
#define mo 1000000007
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
	int n,k,d,f[311][311],ans;
	cin >> n >> k >> d;
	f[0][0]=1;
	for(int i=0;i<n;i++)
		for(int j=0;j<=k;j++)
			for(int l=1;l<=k;l++)
				f[i+l][max(j,l)]=(f[i+l][max(j,l)]+f[i][j])%mo;
	for(int i=d;i<=k;i++)
		ans=(ans+f[n][i])%mo;
	cout << ans << endl;

}	

int main(int argc, char const *argv[]){
	// freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
	solve();
	return 0;
}