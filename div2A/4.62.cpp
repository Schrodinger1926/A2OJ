#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
	int k; cin >> k;
	map<char, int> mymap;
	for (int i = 0; i < 4; ++i)
	{
		string row; cin >> row;
		for (int j = 0; j < 4; ++j) 
		{ 
			if (row[j] != '.') { mymap[row[j]]++; }
		}
	}

	for (map<char, int>::iterator it = mymap.begin(); it != mymap.end(); it++)
	{
		if (it->second > k*2) { cout << "NO" << endl; return 0; }
	}
	cout << "YES" << endl; return 0;
}