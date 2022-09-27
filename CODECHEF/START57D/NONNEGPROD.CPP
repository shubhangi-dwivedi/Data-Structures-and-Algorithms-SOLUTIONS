//Non-Negative Product
//https://www.codechef.com/submit/NONNEGPROD

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	        
	    int neg_count=0,x=1;
	    for(int i=0;i<n;i++){
	        if(a[i]<0)
	            neg_count++;
	        else if(a[i]==0){
	            x=0;
	            break;
	        }
	    }
	    
	            
	    if(neg_count%2==0 || x==0)
	        cout<<0<<endl;
	    else if(neg_count%2!=0)
	        cout<<1<<endl;
	}
	return 0;
}
