#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string lever; cin >> lever;
	int p;
	long long int left = 0, right = 0;

	// Locate pivot
	for (int i = 0; i < lever.size(); ++i)
	{
		if (lever[i] == '^')
		{
			p = i;
			break;
		}
	}

	for (int i = 0; i < p; ++i)
	{	
		if (lever[i] != '=')
		{ 
			int w = lever[i] - 48;
			left += w*(p - i);
		}
	}
	for (int i = p+1; i < lever.size(); ++i)
	{
		if (lever[i] != '=')
		{ 
			int w = lever[i] - 48;
			right += w*(i - p);
		}
	}
	if (left > right) cout << "left" << endl;
	if (left < right) cout << "right" << endl;
	if (left == right) cout << "balance" << endl;
}	