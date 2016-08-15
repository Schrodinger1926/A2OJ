#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	map<int, int> mymap;
	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin >> temp;
		mymap[temp]++;
	}
	if (n == 1){cout << "YES" << endl; return 0;}
	
	for (map<int, int>::iterator it = mymap.begin(); it != mymap.end(); it++)
	{
		if(it->second > n/2 + n%2) { cout << "NO" << endl; return 0;}
	}
	cout << "YES" << endl;
	return 0;
}