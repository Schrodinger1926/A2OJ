#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

void print(int n){
	char v1[2] = {'-','-'}, v2[5] = {'-','-','-','-','-'};
	v1[n/5] = 'O';
	int i;
	for (i = 0; i < n%5; ++i)
	{
		v2[i] = 'O';
	}
	i++;
	for (int j = i; j < 5; ++j)
	{
		v2[j] = 'O';
	}

	// Display
	for (int j = 0; j < 2; ++j)
	{
		cout << v1[j];
	}
	cout << '|';
	for (int j = 0; j < 5; ++j)
	{
		cout << v2[j];
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
	string n; cin >> n;
	for (int i = n.size() - 1; i >= 0 ; --i)
	{
		int digit = n[i] - 48;
		print(digit);
	}

}	