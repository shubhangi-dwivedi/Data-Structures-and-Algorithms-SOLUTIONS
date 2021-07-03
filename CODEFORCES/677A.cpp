//677A - Vanya and Fence

#include<iostream>
 
using namespace std;
 
int main()
{
    long int n,h,sum=0;
    cin>>n;
    cin>>h;
    
    long int a[n];
    
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    for(int i=0;i<n;i++)
    {
        if(a[i]<=h)
            sum+=1;
        else
            sum+=2;
    }
    
    cout<<sum<<endl;
    
    return 0;
}
