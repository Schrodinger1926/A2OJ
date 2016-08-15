#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
	int k; cin >> k;
	int d; cin >> d;
	string zeros (k-1, '0');
	if (k > 1 and d == 0) cout << "No solution" << endl;
	else cout << d << zeros << endl;

}