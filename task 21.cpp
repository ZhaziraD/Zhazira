#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b;
	cin>>a>>b;
	double c=sqrt(pow(a, 2)+pow(b, 2));
	
	cout<<"AREA IS "<<(a*b)/2<<endl;
	cout<<"HYPOTHENUSE IS "<<c<<endl;
	cout<<"PERIMTRE IS "<<c+b+a;	
}
