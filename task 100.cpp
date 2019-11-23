#include <iostream>
using namespace std;

int main()
{
	for (int n=1000; n<=9999; n++){
		int a=n/1000; //1st number 
		int b=n%10; //4th number
		int c=((n%100)-b)/10; //3rd number
		int d=((n%1000)-(c*10+b))/100; //2nd number
		
		if (a!=5 && a!=6 && b!=5 && b!=6 && c!=5 && c!=6 && d!=5 && d!=6){
			cout<<a<<b<<c<<d<<" ";
		}
	}
}
