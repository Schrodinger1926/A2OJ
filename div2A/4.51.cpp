#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{	
	string seq, inst;
	cin >> seq >> inst;
	int i = 0, j = 0;
	for (int i = 0; i < inst.size(); ++i)
	{
		if (seq[j] == inst[i])
		{
			j++;
		}
	}
	cout << j+1 << endl;
}