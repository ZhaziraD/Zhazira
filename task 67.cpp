#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int d=n%10; //4
	int c=((n%100)-d)/10; //3
	int b=((n%1000)-(c*10+d))/100; //2
	int a=n/1000; //1
	
	if ((d>a && d>c && d>b && a<b && a<c) || (a>b && a>c && a>d && d<b && d<c)) cout<<d<<b<<c<<a;
	if ((d>b && d>c && d>a && b<c && b<a) || (b>a && b>c && b>d && d<c && d<a)) cout<<a<<d<<c<<b;
	if ((d>b && d>c && d>a && c<b && c<a) || (c>a && c>b && c>d && d<a && d<c)) cout<<a<<b<<d<<c;
	
	if ((a>b && a>c && a>d && b<c && b<d) || (b>a && b>c && b>d && a<c && a<d)) cout<<b<<a<<c<<d;
	if ((a>b && a>c && a>d && c<b && c<d) || (c>a && c>b && c>d && a<c && a<d)) cout<<c<<b<<a<<d;
	if ((b>a && b>c && b>d && c<a && c<d) || (c>a && c>b && c>d && b<a && b<d)) cout<<a<<c<<b<<d;

}
