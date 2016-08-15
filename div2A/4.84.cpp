#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{	
	int r1, c1, r2, c2; cin >> r1 >> c1 >> r2 >> c2;
	// now relocate according to first quadrant
	int x = abs(r1 - r2); int y = abs(c1 - c2);
	// first point will act as origin

	// rook
	if (x == 0 or y == 0)
	{
		cout << 1 << " ";
	}

	else{
		cout << 2 << " ";
	}

	if ((x+y)%2 == 0)
	{
		if (float(y)/x == 1)
		{
			cout << 1 << " ";
		}
		else{
			cout << 2 << " ";
		}
	}

	else{
		cout << 0 << " ";
	}

	cout << max(x,y) << endl;

	return 0;
}