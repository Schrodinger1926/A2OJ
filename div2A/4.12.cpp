#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m,min;
	cin >> n >> m;
	min = n > m ? m : n;
	min % 2 == 0 ? cout << "Malvika"<<endl : cout << "Akshat"<<endl;

	return 0;
}