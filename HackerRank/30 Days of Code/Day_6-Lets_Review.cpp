#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        string s,s1,s2;
        cin>>s;
    
    for(j=0;j<s.size();j++)
    {
        if(j%2==0)
        {
           s1+=s[j]; 
        }
        else
        {
            s2+=s[j];
        }
    }
        cout<<s1<<" "<<s2<<endl;
    }
    return 0;
}
