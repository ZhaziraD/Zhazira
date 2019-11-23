#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin>>a>>b;
	
	if (a>b) cout<<"YES";
	else{
		int c=0;
		c=a;
		a=b;
		b=c;
		cout<<a<<" "<<b;
	}
}
