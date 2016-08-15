#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{	
	int n, temp;
	cin >> n;
	map<int, int> school;
	map<int, vector<int> > studentIndex;
	// vector<int> studentIndex[1];
	// vector<int> studentIndex[2];
	// vector<int> studentIndex[3];

	// initialize school students to 0
	school[1] = 0;
	school[2] = 0;
	school[3] = 0;
	
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		school[temp] += 1;
		studentIndex[temp].push_back(i+1);
	}

	int mini = min(min(school[1],school[2]), school[3]);
	cout << mini << endl;
	if (mini > 0)
	{
		for (int i = 0; i < mini; ++i)
		{
			cout << studentIndex[1][i] << " " << studentIndex[2][i] << " " << studentIndex[3][i] << endl;
		}

	}
	
	return 0;	

}