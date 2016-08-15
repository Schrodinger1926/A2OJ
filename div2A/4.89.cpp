#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]){

	ifstream input("input.txt");
	ofstream output("output.txt");
	int n; input >> n;
	string students; input >> students;
	// take one student from each half
	students = 'x' + students;
	for (int i = 1; i <= n/2; ++i)
	{
		if (students[i] != students[n/2 + i]){
			students[i] == 'L' ? output << i << " " << n/2 + i << endl : output << n/2 + i << " " << i << endl;
		}
		else{
			output << i << " " << n/2 + i << endl;
		}

	}

	return 0;
}