#include <iostream>
using namespace std;

int main()
{
	int p, sum=0;
	
	for (int i=10; i>=1; i--){
		p=i*i;
		sum+=p;
	}
	cout<<sum;
}
