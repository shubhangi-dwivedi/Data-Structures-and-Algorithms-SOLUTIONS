//486A - Calculating Function

#include<iostream>

using namespace std;

int main()
{
    long long int n,sum=0;
    
    cin>>n;
    
        if(!(n%2))
            cout<<n/2;
        else
            cout<<n/2-n;
    
    return 0;
}