#include <iostream>
using namespace std;

int main()
{
	int n, sum=0;
	cin>>n;
	int a[n];
	
	for (int i=1; i<=n; i++){
		cin>>a[i];
	}
	
	for (int i=1; i<=n; i++){
		if (a[i]==0) break;
		sum+=a[i];
	}
	cout<<sum;
}
