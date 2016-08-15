#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int min = 100;
	int max = 0;
	int max_i,min_i;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		if(x > max){
			max = x;
			max_i = i;
		}
		if(x <= min){
			min = x;
			min_i = i;
		}

	}
	max_i < min_i ?	cout << max_i + n - 1 - min_i << endl: cout << max_i + n - 1 - min_i -1 << endl;
	
	return 0;

}
