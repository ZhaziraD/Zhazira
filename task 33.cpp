#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, y;
	cin>>x>>y;
	
	if ((x-sqrt(y))>=0){
		if (y>=0){
			cout<<sqrt(x-sqrt(y));
		}
	}
}
