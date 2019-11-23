#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin>>a>>b;
	
	if (a%12==0 && b%12==0){
		if (a>b) cout<<a-b+1;
		if (b>a) cout<<b-a+1;
	}
}
