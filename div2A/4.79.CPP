#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	char truimpSuit; cin >> truimpSuit;
	char rank[9] = {'6','7','8','9','T','J','Q','K','A'};
	map<char, int> mymap;
	for (int i = 0; i < 9; ++i)
	{
		mymap[rank[i]] = i;
	}
	string card1, card2; cin >> card1 >> card2;

	if (card1[1] == card2[1])
		{
			if (mymap[card1[0]] > mymap[card2[0]]) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	else if (card1[1] == truimpSuit) cout << "YES" << endl;

	else cout << "NO" << endl;
 
}