#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double sum, per, year;
	cin>>sum>>per>>year;
	
	cout<<sum*pow(per*0.01, year);
}
