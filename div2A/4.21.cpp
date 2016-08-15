#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{	
	int n, m, a, b, cost;
	cin >> n >> m >> a >> b;
	if (float(b)/m <= a)
	{	// Special ticket should cost less or equal to standard per ride rates
		if (n > m)
		{
			if ((n%m)*a > b)
			{	// Sometimes it can be benificial to buy special trains even after some rides are going waste
				cost = (n/m)*b + b;

			}
			else{
				// When buying the last speacial ticket in not benificial
				cost = (n/m)*b + (n%m)*a;
			}
		}

		else{
			if (n*a > b)
			{	// Sometimes it can be benificial to buy special trains even after some rides are going waste
				cost = b;
			}
			else{
				// When buying one speacial ticket in not benificial
				cost = n*a;
			}
		}
	}

	else{
		cost = n*a;
	}
	
	cout << cost << endl;
	return 0;
}  