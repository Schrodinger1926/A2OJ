#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{	
	int n, x, t = 0;
	cin >> n >> x;
	int r_prev = 1;
	int l_now, r_now;
	for (int i = 0; i < n; ++i)
	{
		cin >> l_now >> r_now;
		t += r_now - l_now + 1;
		int gap = l_now - r_prev;
		if (gap % x < gap) t += gap%x;
		else t+= gap;

		r_prev = r_now + 1;
	}

	cout << t << endl;
	return 0;
}	