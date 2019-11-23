#include <iostream>
using namespace std;

int main()
{
	for (int n=1000; n<9999; n++){
		int a=n/1000; //1st number 
		int b=n%10; //4th number
		int c=((n%100)-b)/10; //3rd number
		int d=((n%1000)-(c*10+b))/100; //2nd number
		if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) cout<<a<<d<<c<<b<<" ";
	}
}
