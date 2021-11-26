#include <iostream>
#include<cstring>
using namespace std;

int main() {
	// your code goes here
	int t;
	
	cin>>t;
	
	if(t==0)
	    return 0;
	
	while(t--)
	{
	        
	    int k,n;
	    string s;
	    cin>>n>>k;
	    cin>>s;
	    if(k>n)
	    {
	       cout<<"NO"<<endl;
	       continue;
	    }
	    int count=0,total=0;
	    for(int i=0; i<n; i++)
	    {
	        if(s[i]=='*')
	           count++;
	        else
	           count=0;
	        if(count>total)
	            total=count;
	    }
	    if(total>=k)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}