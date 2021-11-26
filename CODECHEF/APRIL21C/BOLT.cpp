#include <iostream>
#include<cmath>

using namespace std;

int main() {
	// your code goes here
	int t;
	float k1,k2,k3,v,total,k,x;
	
	cin>>t;
	while(t--)
	{
	    cin>>k1>>k2>>k3>>v;
	    k=k1*k2*k3*v;
	    total = 100/k;
	     
	    total=total*100+0.5;
	    total=total/100;
	    
	    if(total < 9.58)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	    
	}
	return 0;
}