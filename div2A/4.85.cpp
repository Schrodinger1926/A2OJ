#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{	
	vector<string> v;
	string x;
	while(cin >> x){
		v.push_back(x);
	}
	int n = v.size();
	string lw;
	char vowels[] = {'a','e','i','o','u','y'};
	if (v[n - 1].size() == 1)
	{	
		lw = v[n-2]; 
		// cout << "above" << endl;
		// cout << lw << endl;
		
	}

	else{
		lw = v[n-1].substr(0, v[n-1].size() - 1);
		// cout << "below" << endl;
		// cout << lw << endl;
	}

	// cout << lw << endl;
	char lc = tolower(lw[lw.size() - 1]);
	for (int i = 0; i < 6; ++i)
	{
		if (lc == vowels[i])
		{
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;
	return 0;
}