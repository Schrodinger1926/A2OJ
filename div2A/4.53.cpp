#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{	
	int k;
	long long int l;
	cin >> k >> l;
	long long int num = 1, counter = 0;
	while (num < l){
		num = num*k;
		counter++;
		// cout <<"Number: " << num << " | K: " << k << endl;

	}
	if (num == l)
	{
		cout << "YES" << '\n' << counter - 1<< endl;
	}
	else{
		cout << "NO" << endl;
	}
}