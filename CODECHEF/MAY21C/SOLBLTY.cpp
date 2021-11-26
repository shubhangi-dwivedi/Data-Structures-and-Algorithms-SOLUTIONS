#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int t;
	cin>>t;
	
	while(t--)
	{
	    long int x,a,b,r;
	    
	    cin>>x>>a>>b;
	    
	    r= (a + (100-x) * b) * 10; 
	    
	    cout<<r<<endl;
	    
	}
	return 0;
}