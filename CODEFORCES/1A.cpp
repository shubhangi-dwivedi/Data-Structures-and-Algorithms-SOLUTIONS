//1A - Theatre Square

#include<iostream>
 
using namespace std;
 
int main()
{
    long long int n,m,a,x,y;
    
    cin>>n>>m>>a;
    
    if(m%a==0)
    {
        x=m/a;
    }
    else
    {
        x=(m/a)+1;
    }
    
    if(n%a==0)
    {
        y=n/a;
    }
    else
    {
        y=(n/a)+1;
    }
    
    cout<<x*y;
    
    return 0;
}