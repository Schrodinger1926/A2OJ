#include <iostream>
#include <cmath>
int main(int argc, char const *argv[])
{
	using namespace std;
	int n;
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cin >> n;
			if(n == 1){
				cout << (abs(j - 2) + abs(i - 2) )<< endl;
			}
		}
	}
	return 0;
}