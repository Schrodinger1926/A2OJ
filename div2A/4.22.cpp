#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{	
	string n;
	cin >> n;
	if (n[0] == '-')
	{	
		int ultimate, penultimate;
		ultimate = n[n.size() - 1] - 48;
		penultimate = n[n.size() - 2] - 48;
		// cout << ultimate <<" " << penultimate << endl;
		if (ultimate < penultimate)
		{	// Delete penultimate element
			n.erase(n.size() - 2, 1);
		}
		else{
			n.erase(n.size() - 1, 2);
		}
	}

	if (n == "-0")
	{
		n = "0";
	}
	cout << n << endl;
	return 0;
}  