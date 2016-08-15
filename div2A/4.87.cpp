#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int n;
int searchK2(int left, int right, int k1){
	int k2 = (left + right)/2;

	if (left > right) return 0; // no result found
	
	if (n == (k1*(k1+1)/2) + (k2*(k2+1)/2)) return k2;
	if (n > (k1*(k1+1)/2) + (k2*(k2+1)/2))  return searchK2(k2 + 1, right, k1);
	if (n < (k1*(k1+1)/2) + (k2*(k2+1)/2))  return searchK2(left, k2 - 1, k1);

	return 0;
 }

int main(int argc, char const *argv[]){

	cin >> n;
	// now make check
	int limit = 44722;
	for (int k1 = 1; k1 < limit; ++k1)
	{
		// take this number and do a binary search for the other one
		int k2 = searchK2(k1, 44722, k1);
		if (k2 > 0){
			cout << "YES" << endl;
			return 0;
		}

	}

	cout << "NO" << endl;
	return 0;

}