#include <iostream>
using namespace std;

int main()
{
	int a;
	cin>>a;
	
	if (a>=2 && a<=5) cout<<a+10;
	if (a>=7 && a<=40) cout<<a-100;
	if (a<0 || a>3000) cout<<3*a;
	else cout<<0;
}
