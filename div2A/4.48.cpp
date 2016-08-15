#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{	
	int n, a, b, c, m;
	cin >> n >> a >> b >> c;
	int S[n+1];
	int V[n+1];

	S[0] = 0;
	V[0] = 0;
	for (int i = 1; i < n + 1; ++i)
	{
		m = 0;
		if (i - a >= 0 and S[i - a] + 1 > m and V[i-a] + a == i){
			m = S[i - a] + 1;
			V[i] = V[i-a] + a;
			// cout << "At : " << "a | index : " << i << endl;
		}

		if (i - b >= 0 and S[i - b] + 1 > m and V[i-b] + b == i){ 
			m = S[i - b] + 1;
			V[i] = V[i-b] + b;
			// cout << "At : " << "b | index : " << i << endl;
		}

		if (i - c >= 0 and S[i - c] + 1 > m and V[i-c] + c == i){ 
			m = S[i - c] + 1;
			V[i] = V[i-c] + c;
			// cout << "At : " << "c | index : " << i << endl;
		}


		S[i] = m;

	}

	cout << S[n] << endl;
	return 0;
}