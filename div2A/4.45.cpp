#include <iostream>
#include <string>

using namespace std;
int main(int argc, char const *argv[])
{	
	int n, k, counter = 0;
	cin >> n >> k;
	string num;
	for (int i = 0; i < n; ++i)
	{
		cin >> num;
		int count = 0;
		for (int j = 0; j < num.size(); ++j)
		{
			if(num[j] == '4' or num[j] == '7') count ++;
		}

		if (count <= k) counter++ ;
	}

	cout << counter << endl;
	return 0;
}	