#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int hi[30];
	int gi[30];
	int counter = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> hi[i] >> gi[i];
	}

	// for (int i = 0; i < n; ++i)
	// {
	// 	cout << "hostColour: " << hi[i] << " guestColour: " << gi[i] << endl;
	// }
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i == j)
			{
				continue;
			}
			else{
				if (hi[i] == gi[j])
				{
					counter += 1;
				}
			}
		}
	}
	cout << counter << endl;
	return 0;
}