#include <iostream>
using namespace std;
int main()
{
	int arr[3];
	int count=0;
	
	for (int i=0; i<3; i++){
		cin>>arr[i];
	}
	
	for (int i=0; i<3; i++){
		if (arr[i]>0) count++;
	}
	cout<<count;
}
