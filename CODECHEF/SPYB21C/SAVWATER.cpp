#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int H,x,y,C;
	    cin>>H>>x>>y>>C;
	    y=floor(y/2);
	    if(((x+y)*H)<=C)
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	}
	return 0;
}