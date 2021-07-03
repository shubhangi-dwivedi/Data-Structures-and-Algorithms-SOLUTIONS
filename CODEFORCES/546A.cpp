//546A - Soldier and Bananas

#include<iostream>
 
using namespace std;
 
int main()
{
    long int i,k,n,w,r=1;
    
    cin>>k>>n>>w;
    
    for(i=1;i<=w;i++)
    {
        r+=i*k;
    }
    
    
    if(r-n-1<=0)
        cout<<"0"<<endl;
    else
        cout<<r-n-1<<endl;
    
    return 0;
}