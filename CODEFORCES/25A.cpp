//25A - IQ test

#include<iostream>
 
using namespace std;
 
int main()
{
    int n,i;
    cin>>n;
    
    int a[n],e=0,o=0;
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
            
        if(a[i]%2==0)
            e++;
        else
            o++;
    }
    
    if(o>e)
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
                break;
        }
    else
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)
                break;
        }
            
    cout<<i+1;
 
    return 0;
}
