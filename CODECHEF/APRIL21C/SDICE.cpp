//Partially correct

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	if(t<1)
	    return 0;
	while(t--)
	{
	    long long n,x=0,y=0,sum=0;
	    cin>>n;
	    
	    if(n<=0)
	        sum=0;
	   
	    else
	    {
	        x=n%4;
	        y=(n-x)/4;
            if(x==1)
            {
                
                for(int i=y;i>0;i--)
                    sum+=20+24;
                if(y>=1)
                    sum+=12;
                sum+=20;
            }
            else if(x==2)
            {
                for(int i=y;i>0;i--)
                    sum+=20+24;
                if(y>=1)
                    sum+=8;
                sum+=36;
            }
            else if(x==3)
            {
                for(int i=y;i>0;i--)
                    sum+=20+24;
                if(y>=1)
                    sum+=4;
                sum+=51;
            }
            else if(x==0)
            {
                for(int i=y;i>=1;i--)
                    sum+=20+24;
                sum+=16;
            }
                
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
