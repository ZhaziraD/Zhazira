#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	double sum=0.0;
	
	for (int i=1; i<=n; i++){
		sum+=i;
	}
	cout<<sum;
}
