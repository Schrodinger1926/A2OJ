#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{	
	int n , m;
	cin >> n >> m;
	char dot = '.';
	char hash = '#';
	string stackOne = string(m-1, dot) + hash;
	string stackTwo = hash + string(m-1, dot);
	string stackEnd = string(m, hash);

	int i = 0;
	bool flag = true;
	while(i < n/2){
		// start with a stack of stackEnd and stackOne
		if (flag)
		{
			cout << stackEnd << '\n' << stackOne << endl;
			flag = false;
		}

		else{
			cout << stackEnd << '\n' << stackTwo << endl;
			flag = true;
		}
		
		i++;

	}	
	// Add final stackEnd
	cout << stackEnd << endl;
}