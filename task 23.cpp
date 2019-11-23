#include <iostream>
using namespace std;

int main()
{
	double x, a, y, k;
	cin>>x>>a>>y>>k;
	
	cout<<"WEIGHT - "<<x<<endl;
	cout<<"PRICE - "<<a<<endl;
	cout<<"PRICE OF "<<y<<"KG"<<(y*a)/x<<endl;
	cout<<"WEIGHT OF "<<k<<"RU"<<(k*x)/a;
}
