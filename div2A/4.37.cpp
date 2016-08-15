#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(int argc, char const *argv[])
{	
	int a, b, el;
	cin >> a >> b;
	if (a < b)
	{	
		el =  b - a + 1;

		if (el%2 == 0)
		{
			cout << a + el/2 - 1 << " " << 0 <<  " " << el/2 + 6 - b << endl; 
		}

		else{
			cout << a + el/2 - 1 << " " << 1 << " " << el/2 + 6 - b << endl; 
		}

	}

	if (a > b)
	{
		
		el =  a - b + 1;

		if (el%2 == 0)
		{
			cout << el/2 + 6 - a  << " " << 0 <<  " " << b + el/2 - 1 << endl;
		}

		else{
			cout << el/2 + 6 - a  << " " << 1 <<  " " << b + el/2 - 1 << endl; 
		}
	}


	else if (a == b){
		cout << 0 << " " << 6 << " " << 0 << endl;
	}
	return 0;
}