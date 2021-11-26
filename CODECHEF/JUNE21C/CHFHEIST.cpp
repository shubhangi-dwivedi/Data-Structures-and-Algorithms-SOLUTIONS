#include <iostream>
using namespace std;
#define ll long long int

int main() {
	// your code goes here
	ll t;
	
	cin>>t;
	while(t--)
	{
	    ll D,d,p,q,count=0,x;

	    cin>>D>>d>>p>>q;
		
		x=D/d;

		if(x%2==0)
			count+=d*((x/2)*(2*p+(x-1)*q));
		else
			count+=d*(x*(p+((x-1)/2)*q));

		count+=(D%d)*(p+(x)*q);

		cout<<count<<endl;
	}
	return 0;
}