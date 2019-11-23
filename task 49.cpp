#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	
	if (a>=b && a>=c && a>=d && a%2==0) cout<<a;
	if (b>=a && b>=c && b>=d && b%2==0) cout<<b;
	if (c>=a && c>=b && c>=d && c%2==0) cout<<c;
	if (d>=a && d>=b && d>=c && d%2==0) cout<<d;
	else cout<<"NOT FOUND"; 
}
