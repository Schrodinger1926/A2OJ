#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(int argc, char const *argv[])
{	
	int n, p, f;
	cin >> n;
	vector<pair<int, int> > laps;
	for (int i = 0; i < n; ++i)
	{	
		cin >> p >> f;
		laps.push_back(make_pair(p,f));
	}

	// now sort according to price
	struct sort_pred {
	    bool operator()(const std::pair<int,int> &left, const std::pair<int,int> &right) {
	        return left.first < right.first;
	    }
	};

	sort(laps.begin(), laps.end(), sort_pred());

	for (int i = 1; i < n; ++i)
	{
		if (get<1>(laps[i]) < get<1>(laps[i-1]) )
		{
			cout << "Happy Alex" << endl;
			return 0;
		}
	}

	cout << "Poor Alex" << endl;
	return 0;
}