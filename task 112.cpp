#include <iostream>
using namespace std;

int main()
{
	int n=10;
	int a[n][n];
	
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			if (i==j) a[i][j]=0;
			else a[i][j]=1;
		}
	}
		
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}	
}
