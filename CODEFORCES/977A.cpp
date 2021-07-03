//977A - Wrong Subtraction

#include<iostream>
 
using namespace std;
 
int main()
{
    long int n, k;
    
    cin>>n>>k;
    
    if(n>=2 && (k>=1 && k<=50))
        for(int i=1;i<=k;i++)
        {
            if(n%10==0)
                n=n/10;
            else
                n=n-1;
        }
    
    cout<<n;
    
    return 0;
}