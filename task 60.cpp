#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin>>a>>b>>c;
	
	int x=0;
	x=a;
	a=c;
	c=x;
		
	cout<<a<<" "<<b<<" "<<c;
}
