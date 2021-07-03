//469A - I Wanna Be the Guy

#include<iostream>
using namespace std;
 
int main()
{
    int n,p,t;
    int a[200]={};
 
    cin>>n;
    
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>t;
        a[t]=1;
    }
    
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>t;
        a[t]=1;
    }
    
    for(int i=1;i<=n;i++)
    {
        if(!a[i])
        {
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    
    cout<<"I become the guy.";
        
    return 0;
}