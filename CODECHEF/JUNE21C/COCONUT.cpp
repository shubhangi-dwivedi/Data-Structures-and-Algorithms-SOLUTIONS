#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	
	cin>>t;
	
	while(t--)
	{
	    int a,b,c,d,x,y,z;
	    
	    cin>>a>>b>>c>>d;
	    
	    x=c/a;
	    y=d/b;
	    
	    z=x+y;
	    
	    cout<<z<<endl;
	}
	
	return 0;
}
