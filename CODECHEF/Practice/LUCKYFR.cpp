#include <iostream>
using namespace std;

typedef long long ll;

int main() 
{
	// your code goes here
	ll t;
	cin>>t;
	if(t<=0)
	    return 0;
	else
	{
	    while(t--)
	    {
	        ll count=0, num, rem;
	        
	        cin>>num;
	        while(num!=0)
	        {
	            rem=num%10;
	            if(rem==4)
	                count++;
	            num=num/10;
	        }
	        cout<<count<<endl;
	    }
	}
	return 0;
}