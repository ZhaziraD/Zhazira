#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin>>a>>b>>c;
	
	if (a<5 && b<5) cout<<"YES";
	if (a<5 && c<5) cout<<"YES";
	if (c<5 && b<5) cout<<"YES";
	else cout<<"NO";
}
