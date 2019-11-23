#include <iostream>
using namespace std;

int main()
{
	int n, count=0;
	cin>>n;
	int a[n];
	
	for (int i=1; i<=n; i++){
		cin>>a[i];
	}
	
	for (int i=1; i<=n; i++){
		if (a[i]==0) break;
		if (a[i]%2==0) count++;
	}
	cout<<count;
}
