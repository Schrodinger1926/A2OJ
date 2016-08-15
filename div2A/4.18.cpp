#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{	
	string str;
	set<char> s;
	string temp;
	while(cin >> temp){
		// cout << temp;
		str += temp;
	}

	for (int i = 0; i < str.size(); ++i)
	{	
		// cout << str[i];
		s.insert(str[i]);
	}

	if (str.size() > 3)
	{
		cout << s.size() - 3 << endl;

	}

	else{
		cout << s.size() - 2 << endl;
	}
	return 0;
}