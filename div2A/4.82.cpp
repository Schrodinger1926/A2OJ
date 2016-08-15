#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{	
	int x ,y; cin >> x >> y;
	// mark four regions here
	int s = 0;
    if(y>x && x>=-y)s=-2+y*4;
    if(y<x && x<=-y+1)s=-y*4;
    if(y<=x && x>-y+1)s=-3+x*4;
    if(y>=x && x<-y)s=-1-4*x;
    
    cout<< s << endl;;

}