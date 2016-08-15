#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]){

	int n; cin>> n;
	string drinks[] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
	int counter = 0;
	for (int i = 0; i < n; ++i)
	{
		// incoming may be a integer or a string
		string client; cin >> client;
		int asciiValue = 0;
		for (int j = 0; j < client.size(); ++j) asciiValue += client[j];
		
		// cout << "ASCII Value: " << asciiValue << endl;
		// cout << "Upper Value: " << client.size()*57 << endl;

		if (asciiValue <= client.size()*57){
			// it's a number
			if (stoi(client) < 18 ) counter += 1;
		}
		
		else{
			// check if it's a hard drink
			std::transform(client.begin(), client.end(), client.begin(), ::toupper);
			for (int k = 0; k < sizeof(drinks)/sizeof(drinks[0]); ++k)
			{
				if (client == drinks[k])
				{
					counter += 1;
					break;
				}
			}
		}	
	}
	cout << counter << endl;
}