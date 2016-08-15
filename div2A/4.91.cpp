#include <iostream>
#include <algorithm>
#include <utility>
#include <numeric>

using namespace std;

int main(int argc, char const *argv[]){

	int n; cin >> n;
	int a[5] = {-1, -1, -1, -1, -1};
	int b[5] = {0, 0, 0, 0, 0};
	for (int i = 0; i < n; ++i)
	{
		int num; cin >> num;
		if (num == 0) 								a[0] = num, b[0] = 1;
		if (num > 0 and num < 10) 					a[1] = num, b[1] = 1;
		if (num > 9 and num < 100 and num%10 == 0) 	a[2] = num, b[2] = 1;
		if (num == 100) 							a[3] = num, b[3] = 1;
		if (num > 9 and num < 100 and num%10 != 0) 	a[4] = num, b[4] = 1;

	}
	
	int last = 0;
	if (b[1] == 0 and b[2] == 0) last = 1;
	
	int counter = 0;
	cout << accumulate(b, b + 4 + last, counter) << endl;
	
	for (int i = 0; i < 4 + last; ++i)
	{
		if (a[i] != -1)
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;
	return 0;
}