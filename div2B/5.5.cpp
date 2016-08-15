#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main(){
	int n;
	long double l,dif = 0;
	cin >> n >> l;
	vector<long double> v;
	long double x;
	for (int i = 1; i < (n + 1); ++i)
	{	
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	long double dif_local;
	
	int i = 0;
	while(i < n-1){
		dif_local = v[i+1] - v[i];
		dif_local > dif ? dif = dif_local:0;
		++i;
	
	}
	2*v[0] > dif ? dif = 2*v[0] : 0;
	2*(l - v[n-1]) > dif ? dif = 2*(l - v[n-1]) : 0;
	cout << setprecision(12) <<(dif/2.0) << endl;
}
