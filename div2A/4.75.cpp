#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	string g1, g2; cin >> g1 >> g2;
	vector<int> v;
	if (g1.size() != g2.size())
	{
		cout << "NO" << endl;
		return 0;
	}
	// find mismatch
	for (int i = 0; i < g1.size(); ++i)
	{
		if (g1[i] != g2[i]) v.push_back(i);
	}

	if (v.size() == 2 and g1[v[0]] == g2[v[1]] and g1[v[1]] == g2[v[0]])
	{
		cout << "YES" << endl;
		return 0;
	}
	cout << "NO" << endl;	
	return 0;
}