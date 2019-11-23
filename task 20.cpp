#include <iostream>
using namespace std;

int main()
{
	double min, km;
	cin>>min>>km;
	
	cout<<"DISTANCE IS "<<km<<" KILOMETRE"<<endl;
	cout<<"TIME IS "<<min<<" MINUTES"<<endl;
	
	cout<<"VELOCITY IS "<<(km*1000)/(min*60)<<" METRE PER SECOND";
}
