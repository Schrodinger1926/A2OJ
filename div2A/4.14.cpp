#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string song, dw = "WUB", plainSong="";
	bool flag = false, firstBlood = true;
	cin >> song;
	int i = 0;
	// cout << dw << endl;

	while(i < song.size()){
		if (song.substr(i, 3) == dw)
		{
			i += 3;
			flag = true;
		}
		else{
			if (flag == true)
			{
				if (firstBlood == true)
				{
					plainSong += "";
					
				}
				else{
					plainSong += " ";
				}
			}
			plainSong += song[i];
			flag = false;
			firstBlood = false;
			i ++;
		}
	}

	cout << plainSong << endl;
	return 0;
}