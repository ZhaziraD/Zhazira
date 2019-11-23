#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin>>a>>b>>c;
	
	c=a+b+c;
	a=a+b;
	b=c-a;
	
	cout<<a<<" "<<b<<" "<<c;
}
