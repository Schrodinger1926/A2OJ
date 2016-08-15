#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	int time[n], k[n];
	for (int i = 0; i < n; ++i)
	{
		time[i] = 0;
	}
	for (int i = 0; i < n; ++i){
	 	cin >> k[i];
	 }
	int minTime = 2147483647;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < k[i]; ++j)
		{	
			int m; cin >> m;
			time[i] += 5*m + 15;
		}
		if (time[i] < minTime )
		{
			minTime = time[i];
		}
	}

	cout << minTime << endl;

}	