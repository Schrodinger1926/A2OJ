#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

int main(int argc, char const *argv[])
{	
	int k, n;
	cin >> k >> n;
	vector<pair<int, int> > d;
	int xi, yi;
	for (int i = 0; i < n; ++i)
	{	
		cin >> xi >> yi;
		d.push_back(make_pair(xi,yi));
	}
	
	struct sort_pred {
		    bool operator()(const std::pair<int,int> &left, const std::pair<int,int> &right) {
		        return left.first < right.first;
		    }
		};

	sort(d.begin(), d.end(), sort_pred());
	
	int j = 0;
	int l;
	while(j < n and get<0>(d[j]) < k){

		l = j;
		while(j < n and get<0>(d[j]) < k){
			// cout << "collecting: " << j << endl; 
			j ++;
		}

		for (int i = l; i < j; ++i)
		{
			k +=  get<1>(d[i]);
		}

	}
	if (j == n)
	{
		cout << "YES" << endl;
		return 0;
	}

	cout << "NO" << endl;
	return 0;
	// int x, y;
	// cin >> x >> y;
	// cout << make_tuple(x,y) << endl;
}