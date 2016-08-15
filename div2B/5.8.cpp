#include <iostream>
#include <set>
using namespace std;
int main(int argc, char const *argv[])
{	// Don't know what the fuck is this
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	// Pre-compute all the prime numbers till 10^6
	int limit = 1000001;
	bool rec[limit];

	// Start seiving process
	for (int i = 2; i*i <= limit - 1 ; ++i)
	{
		if(rec[i] == false)
		{
			for (int j = i*i; j <= limit - 1; j += i)
			{
				rec[j] = true;
			}	
		}
	}
	
	set<long long> res;

	// Collect left of numbers i.e prime numbers
	for (int i = 2; i <= limit - 1 ; ++i)
	{
		if (rec[i] == false)
		{
			res.insert((long long)i*i);
		}
	}


	// Query
	int n; cin >> n;
	long long x;
	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		if (res.find(x) != res.end())
		{
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}


	return 0;
}