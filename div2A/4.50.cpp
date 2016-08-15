#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{	
	int n, m;
	cin >> n >> m;
	int mx[m], idx[m];
	vector<string> marks;
	
	// initialize arrays
	for (int i = 0; i < m; ++i)
	{
		mx[i] = 0;
		idx[i] = 0;
	}
	// find max for each subject
	for (int i = 0; i < n; ++i)
	{	
		string strMarks;
		cin >> strMarks;
		marks.push_back(strMarks);
		for (int j = 0; j < m; ++j)
		{	
			int intMark = strMarks[j] - 48; // type casting from char to string
			if (intMark > mx[j])
			{
				mx[j] = intMark;
				idx[j] = i;
			}
		}
	}

	set<int> myset;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			int intMark = marks[i][j] - 48;
			if (intMark == mx[j])
			{
				myset.insert(i);
			}
		}
	}

	cout << myset.size() << endl;
}