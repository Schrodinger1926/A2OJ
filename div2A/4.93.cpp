#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[]){

	ifstream input("input.txt");
	ofstream output("output.txt");
	
	int idx; input >> idx;
	int a[3] = {1, 2, 3};
	for (int i = 0; i < 3; ++i)
	{
		int x, y; input >> x >> y;
		swap(a[x-1], a[y-1]);
	}

	for (int i = 0; i < 3; ++i)
	{	
		if (a[i] == idx)
		{
			output << i + 1 << endl;
			return 0;
		}
	}
}