#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	
	cin>>t;
	while(t--)
	{
	    int a_min,b_min,c_min,a,b,c,t_min;
	    
	    cin>>a_min>>b_min>>c_min>>t_min>>a>>b>>c;
	     if(a>=a_min && b>=b_min && c>=c_min)
	     {
	         if((a+b+c)>=t_min)
	            cout<<"YES\n";
	         else
	            cout<<"NO\n";
	     } 
	        else
	            cout<<"NO\n";
	}
	return 0;
}