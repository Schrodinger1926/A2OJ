#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) cin >> a[i];
	for (int i = 0; i < n-1; ++i)
	{
		int x1; int y1;
		if (a[i] < a[i+1]) { x1 = a[i]; y1 = a[i+1] ;}
		else { x1 = a[i + 1]; y1 = a[i];}
		for (int j = i+1; j < n-1; ++j)
		{
			int x2 ; int y2;
			if (a[j] < a[j+1]) { x2 = a[j]; y2 = a[j+1]; }
			else { x2 = a[j + 1]; y2 = a[j]; }
			// make x1 as the smaller one
			if ((x1 < x2 and x2 < y1 and y1 < y2) or (x2 < x1 and x1 < y2 and y2< y1))
			{	
				// cout << x1 << "," << y1 << " " << x2 << "," << y2 << endl;
				cout << "yes" << endl; 
				return 0;
			}
		}
	}
	cout << "no" << endl;

	return 0;
}