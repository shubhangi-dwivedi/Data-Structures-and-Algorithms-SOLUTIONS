#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
		int t;
	cin>>t;
	
	while(t--){
	    int x,y,k;
	    cin>>x>>y>>k;
	    
	    if(abs(x)%k==0 && abs(y)%k==0)
	        cout<<"YES"<<endl;
	   else
	        cout<<"NO"<<endl;
	    
	}
	return 0;
}
