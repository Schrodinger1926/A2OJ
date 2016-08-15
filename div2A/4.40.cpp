#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{	
	int n, temp;
	cin >> n;
	map< int, int > mymap;
	mymap[0] = 0;
	mymap[1] = 0;
	mymap[2] = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		mymap[i%3] += temp;
	}
	// check
	for (int i = 0; i < 3; ++i)
	{
		cout << mymap[i] << " " ;

	}
	cout << endl;
	// check

	string ex1 = "chest", ex2 = "biceps" , ex3 = "back";
	int m = 0;
	string ex_m = ex1;

	if (mymap[m] < mymap[1])
	{
		ex_m = ex2;
		m = 1;
	}

	if (mymap[m] < mymap[2])
	{
		ex_m = ex3;
		m = 2;
	}

	cout << ex_m << endl;
}	