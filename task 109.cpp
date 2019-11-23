#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	if (n%2==0){
		for (int i=1; i<=n/2; i++){
			for (int j=1; j<=7; j++){
				cout<<"* ";
			}
			cout<<endl;
		
			for (int k=1; k<=4; k++){
				cout<<"* ";
			}
			cout<<endl;
		}
	}
	
	if (n%2!=0){
		for (int i=1; i<=n/2; i++){
			for (int j=1; j<=7; j++){
				cout<<"* ";
			}
			cout<<endl;
		
			for (int k=1; k<=4; k++){
				cout<<"* ";
			}
			cout<<endl;
		}
		for (int j=1; j<=7; j++){
				cout<<"* ";
			}	
	}
}
