#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{	
	int n; cin >> n;
	char road[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> road[i];
	}

	// find which of the three cases do we have
	int s, t;
	for (int i = 0; i < n; ++i)
	{
		if (road[i] == 'R')
		{
			// extract upto wheres
			s = i;
			while (road[i] == 'R'){
				i++;
			}
			if (road[i] == '.')
			{	t = i;
				cout << s + 1 << " " << t + 1 << endl;
			}
			else{
				t = i - 1;
				cout << s + 1 << " " << t + 1<< endl;
			}
			return 0;
		}

		if (road[i] == 'L')
		{
			t = i - 1;
			while (road[i] == 'L'){
				i++;
			}
			s = i - 1;
			cout << s + 1 << " " << t + 1 << endl;
			return 0;
		}
	}
}