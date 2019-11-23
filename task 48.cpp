#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin>>a>>b>>c; //a+b a+c c+b
	
	if (a+b>=a+c && a+b>=c+b) cout<<a<<" "<<b;
	if (a+c>=a+b && a+c>=c+b) cout<<a<<" "<<c;
	if (c+b>=a+b && c+b>=a+c) cout<<c<<" "<<b;
}
