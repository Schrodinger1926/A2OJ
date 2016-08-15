#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{	
	int n, x, p, q;
	set<int> myset;
	cin >> n;
	
	cin >> p;
	for (int i = 0; i < p; ++i)
	{
		cin >> x;
		myset.insert(x);
	}

	cin >> q;
	for (int i = 0; i < q; ++i)
	{
		cin >> x;
		myset.insert(x);
	}
		
	
	if (myset.size() == n)
	{
		cout << "I become the guy." << endl;
	}
	else{
		cout << "Oh, my keyboard!" << endl;
	}

	return 0;
}