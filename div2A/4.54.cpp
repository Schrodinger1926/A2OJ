#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{	
	int n, zero, neg;
	cin >> n;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	for (int i = 0; i < n; ++i)
	{	
		int temp;
		cin >> temp;
		if (temp < 0) 
		{
			v1.push_back(temp);
		}
		if (temp == 0)
		{
			v3.push_back(temp);
		}
		if (temp > 0)
		{
			v2.push_back(temp);
		}
	}

	// display
	cout << 1 << " ";
	cout << v1[0] << endl;
	if (v2.size() == 0)
	{
		cout << 2 << " ";
		for (int i = 1; i < 3; ++i)
		{
			cout << v1[i] << " ";
		}
		cout << endl;

		cout << v1.size() - 3 + v3.size() << " ";
		for (int i = 3; i < v1.size(); ++i)
		{
			cout << v1[i] << " ";
		}

		for (int i = 0; i < v3.size(); ++i)
		{
			cout << v3[i] << " ";
		}
		cout << endl;
	}
	else{
		cout << v2.size() << " ";
		for (int i = 0; i < v2.size(); ++i)
		{
			cout << v2[i] << " ";
		}
		cout << endl;
		cout << v3.size() + v1.size() - 1<< " ";
		for (int i = 1; i < v1.size(); ++i)
		{
			cout << v1[i] << " ";
		}
		for (int i = 0; i < v3.size(); ++i)
		{
			cout << v3[i] << " ";
		}
		cout << endl;
	}
}