#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{	
	int poss[6];
	int A[3];
	for (int i = 0; i < 3; ++i)
	{
		cin >> A[i];
	}
	
	poss[0] = A[0] + A[1] + A[2];
	poss[1] = A[0]*A[1]*A[2];
	poss[2] = (A[0] + A[1])*A[2];
	poss[3] = A[0]*(A[1] + A[2]);
	poss[4] = A[0]*A[1] + A[2];
	poss[5] = A[0]+ A[1]*A[2];
	cout << *std::max_element(poss, poss + 4) << endl;
	return 0;
}