#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	if(t<=0)
	    return 0;
	
	while(t--)
	{
	    int n,m=1,count=0;
	    cin>>n;
	    cout<<n<<endl;
	   /* while(m<=n)
	    {
	        if(n%m <= n/2)
	            count++;
	        m++;
	    }
	    cout<<count<<endl;*/
	}
	return 0;
}