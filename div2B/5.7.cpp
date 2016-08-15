#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
	int n,m;
	string x1,x2,x;
	map<string,string> map;
	cin >> n >> m;
	for (int i = 0; i < m; ++i)
	{
		cin >> x1 >> x2;
		x1.size() > x2.size() ? map[x1] = x2 : map[x1] = x1;
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		cout << map[x] << ' ';
	}
	return 0;
}