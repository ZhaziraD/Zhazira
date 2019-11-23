#include <iostream>
using namespace std;

int main()
{
	int x;
	cin>>x;
	
	int a=x%10;
	int b=x-a;
	int c=b/10;
	int d=a*100;
	int e=d+c;
	
	cout<<e;
}
