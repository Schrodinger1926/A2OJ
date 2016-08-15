#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{	// Square can be any where its just the sides will be parallel to co-ordinate axis.
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	
	// check slope
	if (x2-x1 != 0)
	{	

		float s = (float(y2 - y1))/(float(x2 - x1));

		if (s == 1 or s == -1)
		{
			cout << x1 << " " << y2 << " " << x2 << " "<< y1 << endl;
			return 0;
		}

		if (s == 0)
		{
			int side = abs(x2-x1);
			cout << x1 << " "<< y1 + side << " "<< x2 << " "<< y2 + side << " "<< endl;
			return 0;

		}

		else{
			cout << -1 << endl;
			return 0;
		}
	}
	
	else{
		int side = abs(y2-y1);
		cout << x1 + side << " "<< y1 << " "<< x2 + side << " "<< y2 << " "<< endl;
		return 0;

	}	
	
}