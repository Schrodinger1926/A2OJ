#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

bool checkLucky(int n){
	string s = to_string(n);
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == '8')
		{	
			return true;
		}
	}
	return false;
}

int main(int argc, char const *argv[])
{	
	int n, counter = 1;
	cin >> n; n += 1;
	// cout << checkLucky(n) << endl;
	while(!checkLucky(n)){
		n++;
		counter++;
	}
	cout << counter << endl;
}	