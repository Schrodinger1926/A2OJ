#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string time; cin >> time;
	string strHrs = time.substr(0, 2);
	string strMin = time.substr(3, 2);

	int intHrs = stoi(strHrs); int intMins = stoi(strMin);
	
	// find revese hrs
	string revHrs = string(1,strHrs[1]) + string(1,strHrs[0]);

	// Find if palindrome is possible for the given hour
	if (stoi(revHrs) >= 60 or intMins >= stoi(revHrs))
	{
		intHrs = (intHrs + 1)%24;
		strHrs = to_string(intHrs);
		if (intHrs < 10 ) strHrs = '0' + strHrs;
		revHrs = string(1,strHrs[1]) + string(1,strHrs[0]);

		while (stoi(revHrs) >= 60)
		{
			// proceed to next hour
			intHrs = (intHrs + 1)%24;
			strHrs = to_string(intHrs);
			if (intHrs < 10 ) strHrs = '0' + strHrs;
			revHrs = string(1,strHrs[1]) + string(1,strHrs[0]);
		}
	}
	
	cout << strHrs << ':' << revHrs << endl;
	return 0;
	

}