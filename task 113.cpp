#include <iostream>
using namespace std;

int main()
{
	int n=20, m=10;
	int a[n][m];
	
	for(int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			if (i%2==0) a[i][j]=i;
			
			else a[i][j]=1;
		}
	}
	
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}	

