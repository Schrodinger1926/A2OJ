#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(int argc, char const *argv[])
{	
	int n, k, m = -2147483647;
	cin >> n >> k;
	int time, fun;
	for (int i = 0; i < n; ++i)
	{	
		cin >> fun >> time;
		if (time > k){
			if (fun - (time -k) > m) m = fun - time + k;
		}

		else{
			if (fun > m ) m = fun;
		}

	}
	cout << m << endl;
}
