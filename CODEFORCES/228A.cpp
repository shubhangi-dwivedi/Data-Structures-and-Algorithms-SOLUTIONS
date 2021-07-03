//228A - Is your horseshoe on the other hoof?

#include<bits/stdc++.h>
 
#define ll long long int
 
using namespace std;
 
int main()
{
    ll s[4];
    
    for(int i=0;i<4;i++)
        cin>>s[i];
    
    unordered_map< ll, int>m;
    int count=0;
    for(int i=0;i<4;i++)
        m[s[i]]++;
        
    for(auto i: m)
    {
        if(i.second>1)
            count+=i.second-1;
    }
    
    cout<<count<<endl;
    
    return 0;
}