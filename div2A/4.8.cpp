#include <iostream>
#include <set>
#include <string>
using namespace std;
int main()
{	
	int N;
	cin >> N;
	string H = "47";
	set <string> S;
	S.insert(H);

	for (int i = 1; i <= N; ++i)
	{
		set <string> temp;
		string local = to_string(i);
		temp.insert(local);
		if (S >= temp && N%i == 0){
			cout << "YES"<< endl;
			return 0;
		}
	}

	cout << "NO" << endl;
	return 0;

}