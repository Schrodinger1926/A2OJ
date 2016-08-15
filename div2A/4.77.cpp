#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int l = -2000000000, r = 2000000000;
	int n; cin >> n;
	for (int i = 0; i < n; ++i)
	{	// intake the sign
		string opr, value, verdict;
		cin >> opr >> value >> verdict;
		int equality = opr.size() == 2 ? 1: 0;
		if (opr[0] == '>')
		{
			if (verdict == "Y")
			{
				// check if disjoint
				if (stoi(value) >= r + equality)
				{
					cout << "Impossible" << endl;
					return 0;
				}

				l = max(l, stoi(value) + 1 - equality);
				// cout << "lower limit : " <<l << endl;

			}

			if (verdict == "N")
			{
				// check if disjoint
				if (stoi(value) <= l - 1 + equality)
				{
					cout << "Impossible" << endl;
					return 0;
				}

				r = min(r, stoi(value) - equality);
			}
		}

		else{
			if (verdict == "Y")
			{
				// check if disjoint
				if (stoi(value) <= l - equality)
				{
					cout << "Impossible" << endl;
					return 0;
				}

				r = min(r, stoi(value) - 1 + equality);

			}

			if (verdict == "N")
			{
				// check if disjoint
				if (stoi(value) >= r + 1 - equality)
				{
					cout << "Impossible" << endl;
					return 0;
				}

				l = max(l, stoi(value) + equality);
			}

		}
	}
	if (l <= r) cout << l << endl;
	else cout << "Impossible" << endl;
}