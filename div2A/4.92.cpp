#include <iostream>
#include <algorithm>
#include <utility>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]){

	int a, b, r; cin >> a >> b >> r;
	if (min(a,b) < 2*r){
		cout << "Second" << endl;
		return 0;
	}
	cout << "First" << endl;
	return 0;
}