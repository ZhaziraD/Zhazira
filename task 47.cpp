#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin>>a>>b>>c;
	
	if ((a>=b && b>=c) || (a>=c && c>=b)) cout<<a;
	if ((b>=a && a>=c) || (b>=c && c>=a)) cout<<b;
	if ((c>=a && a>=b) || (c>=b && b>=a)) cout<<c;
}
