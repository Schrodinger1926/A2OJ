#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
bool customSort(int i, int j){
	return (j < i);
}

int main(int argc, char const *argv[])
{
	int n, m, k; cin >> n >> m >> k;
	vector<int> filterSock;
	for (int i = 0; i < n; ++i)
		{	
			int temp; cin >> temp;
			filterSock.push_back(temp);
		}	
	sort(filterSock.begin(), filterSock.end(), customSort);
	// propogate one by one if filter is required
	int i = 0;
	if (k < m)
	{	
		m = m - (k - 1); // leave one socket for filter
		while (m != 0 and i < n){
			if (filterSock[i] < m) m = m - (filterSock[i] - 1); // again leave one socket
			else m = 0;
			i++;
		}
		if (m == 0) cout << i << endl;
		else cout << -1 << endl;
		return 0; 
	}

	cout << i << endl;
}