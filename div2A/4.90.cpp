#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

struct customSort
	{
		bool operator()(const std::pair<int,int> &left, const std::pair<int,int> &right){
			return left.first > right.first;
		}
	};

int main(int argc, char const *argv[]){

	int n; cin >> n;
	vector<pair<int,int> > v;
	for (int i = 0; i < n; ++i){
		int x; cin >> x;
		v.push_back(make_pair(x, i + 1));
	}
	// sort in reverse w.r.t first element
	sort(v.begin(), v.end(), customSort());

	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			for (int k = j + 1; k < n; ++k)
			{
				if (get<0>(v[i]) ==  get<0>(v[j]) + get<0>(v[k])){ 
					cout << get<1>(v[i])<< " " << get<1>(v[j])<< " " << get<1>(v[k]) << endl;
					return 0;
				} 
			}
		}
	}
	cout << -1 << endl;
	return 0;
}