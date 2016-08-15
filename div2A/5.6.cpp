#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	vector<long long> v;
	long long x;
	for (int i = 0; i < n; ++i)
	{	
		cin >> x;
		v.push_back(x);
	}
	bool Flag1 = false;
	bool Flag2 = false;
	int i=0,l=0,r=0;
	while(i < n-1){
		if(v[i+1] < v[i]){
			l = i;
			Flag1 = true;
			++i;
			break;
		}
		++i;
	}

	while(i < n-1){
		if(v[i+1] > v[i]){
			r = i;
			Flag2 = true;
			break;
		}
		++i;
	}	

	if(Flag1 == true and Flag2 == false) r = i;
	reverse(v.begin() + l,v.begin() + r + 1);
	while(i < n -1){
		if(v[i+1] < v[i]){
			cout << "no" << endl;
			return 0;
		}
		++i;
	}
	if(l > 0 and v[l] < v[l-1]){
		cout << "no" << endl;
		return 0;
	}
	cout << "yes \n" << l+1 << ' ' << r+1 << endl;
	return 0;

}
