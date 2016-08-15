#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

bool nonDegenerate(int x[], int y[]){

	for (int i = 0; i < 3; ++i)
	{
		if (x[i] == x[(i+1)%3] and y[i] == y[(i+1)%3]) return false;
	}

	return true;
}

bool rightAngled(int x[], int y[]){
	// check non-degeneracy and property
	for (int i = 0; i < 3; ++i)
	{
		if (nonDegenerate(x, y) and pow(abs(x[i] - x[(i+1)%3]),2) + pow(abs(y[i] - y[(i+1)%3]),2) == pow(abs(x[i] - x[(i+2)%3]),2) + pow(abs(y[i] - y[(i+2)%3]),2) + pow(abs(x[(i+1)%3] - x[(i+2)%3]),2) + pow(abs(y[(i+1)%3] - y[(i+2)%3]),2)){
			return true;
		}
	}
	return false;
}

int main(int argc, char const *argv[]){
	int x[3], y[3];
	for (int i = 0; i < 6; ++i) i%2 == 0 ? cin >> x[i/2] : cin >> y[i/2];

	// if already right
	if (rightAngled(x,y)){
	 	cout << "RIGHT" << endl;
	 	return 0;
	}

	// brute force
	int dx[] = {-1, 0, 0, 1};
	int dy[] = { 0,-1, 1, 0};
	for (int i = 0; i < 3; ++i)
	{	
		for (int j = 0; j < 4; ++j)
	 	{	
	 		int _x[] = {x[i] + dx[j], x[(i + 1)%3], x[(i + 2)%3]};
	 		int _y[] = {y[i] + dy[j], y[(i + 1)%3],  y[(i + 2)%3]};
			
			if (rightAngled(_x, _y)) {
				cout << "ALMOST" <<  endl;
				// cout << x[i] + dx[j] << " " << y[i] + dy[j] << " " << x[(i + 1)%3] << " " << y[(i + 1)%3] << " "  << x[(i + 2)%3] << " " << y[(i + 2)%3] << endl;
				return 0;
			}

		}
	}
	// none of the above
	cout << "NEITHER" << endl;
	return 0;	
}