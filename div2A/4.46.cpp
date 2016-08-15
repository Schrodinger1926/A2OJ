#include <iostream>
#include <string>

using namespace std;

int score(int p, int t){
	return max(3*(p/10), p - (p/250)*t);
}
int main(int argc, char const *argv[])
{	
	int a, b, c, d, s1, s2;
	cin >> a >> b >> c >> d;
	s1 = score(a,c);
	s2 = score(b,d);

	if (s1 > s2)
	{
		cout << "Misha" << endl;
	}

	if (s1 == s2)
	{
		cout << "Tie" << endl;
	}

	if (s1 < s2){
		cout << "Vasya" << endl;
	}
	return 0;
}	