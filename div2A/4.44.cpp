#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;
int main(int argc, char const *argv[])
{	
	int n;
	map< int , vector<int> > rows;
	map< int , vector<int> > columns;

	cin >> n;	
	
	// generate adjacency list of row and column
	int x, y;
	for (int i = 0; i < n; ++i)
	{	
		cin >> x >> y;
		rows[y].push_back(x);
		columns[x].push_back(y);
	}	
	
	for (map<int, vector<int> >::iterator i = rows.begin(); i != rows.end(); ++i)
	{
		sort(i->second.begin(), i->second.end());
	}

	for (map<int, vector<int> >::iterator i = columns.begin(); i != columns.end(); ++i)
	{
		sort(i->second.begin(), i->second.end());
	}

	int counter = 0;
	for (map<int, vector<int> >::iterator i = rows.begin(); i != rows.end(); ++i)
	{
		y = i->first;
		for (int j = 1; j < (i->second).size() - 1; ++j)
		{	
			x = (i->second)[j];
			for (int k = 1; k < columns[x].size() - 1; ++k)
						{
							if (columns[x][k] == y){
								counter++;
								break;
							}
						}			
		}
	}

	cout << counter << endl;
	return 0;
}	