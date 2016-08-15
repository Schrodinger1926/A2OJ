#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{	
	long long n , k;
	cin >> n >> k;
	if (n%2 == 0)
	{
		if (k  > n/2)
		{	
			// even number requested
			k = k - n/2;
			cout << 2*k << endl;
		}

		else{
			// odd number requested
			cout << 2*(k-1) + 1 << endl;
		}
	}
	else{
		if (k > (n-1)/2 + 1){
			// even number requested
			k = k - ((n-1)/2) - 1;
			cout << 2*k << endl;
		}
		else{
			// odd number requested
			cout << 2*(k-1) + 1 << endl;
		}
	}

	return 0;
}  