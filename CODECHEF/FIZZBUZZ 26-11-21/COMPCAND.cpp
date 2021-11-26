#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int count=0;
	    
	    if(n%k==0){
	        count=n/k;
	        cout<<count<<endl;
	        continue;
	    }
	    else if(n==0)
            cout<<0<<endl;
        else
            cout<<-1<<endl;
	}	
	
	return 0;
}
