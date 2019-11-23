#include <iostream>
using namespace std;

int main()
{
	int n=30, l=5;
	int a[n][n];
	
	for (int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if (i%2==0) a[i][j]=j;
			else a[i][j]<<1;
		}
	}
	
	for (int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
