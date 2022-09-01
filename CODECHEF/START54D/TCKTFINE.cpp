//Ticket Fine
//https://www.codechef.com/START54D/problems/TCKTFINE

#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int x,q,p;
	    cin>>x>>q>>p;
	    
	    cout<<abs(x*(p-q))<<endl;
	}
	
	return 0;
}
