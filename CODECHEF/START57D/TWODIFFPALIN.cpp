//Two Different Palindromes
//https://www.codechef.com/problems/TWODIFFPALIN

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    
	    if(a%2==1 && b%2==1)
	        cout<<"NO"<<endl;
	    else if((a%2==1 && a==1) || (b%2==1 && b==1))
	        cout<<"NO"<<endl;
	    else
	        cout<<"YES"<<endl;
	}
	return 0;
}