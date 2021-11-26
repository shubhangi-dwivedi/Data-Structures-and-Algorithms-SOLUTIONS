#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	
	while(t--)
	{
	    ll n,x,y,z;
	    cin>>n>>x;
	    
	    set<ll> s;
	    for(int i=0;i<n;i++)
	    {
	        cin>>y;
	        s.insert(y);
	    }
	    
	    z=s.size();
	    
	    cout<<min(z,n-x)<<endl;
	}
	return 0;
}