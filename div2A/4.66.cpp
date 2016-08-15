#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<pair<char,int> > v;
	for (int i = 0; i < 4; ++i)
	{	
		char opt, dot;
		string dsc;
		cin >> opt >> dot;
		cin >> dsc;
		v.push_back(make_pair(opt, dsc.size()));
	}

	// custom sort
	struct sort_second {
	    bool operator()(const std::pair<char,int> &left, const std::pair<char,int> &right) {
	        return left.second < right.second;
	    	}
		};
	// sort by second element
	sort(v.begin(), v.end(), sort_second());

	// check for tie
	if (2*get<1>(v[0]) <= get<1>(v[1]) and 2*get<1>(v[2]) <= get<1>(v[3])) {cout << 'C' << endl; return 0;}
	if (2*get<1>(v[0]) <= get<1>(v[1])) { cout<< get<0>(v[0]) << endl; return 0; }
	if (2*get<1>(v[2]) <= get<1>(v[3])) { cout<< get<0>(v[3]) << endl; return 0; }
	cout << 'C' << endl;


}