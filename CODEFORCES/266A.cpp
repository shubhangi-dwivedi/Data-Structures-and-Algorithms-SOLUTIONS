//266A - Stones on the Table

#include<iostream>
 
using namespace std;
 
#define MAX 100001
 
int main()
{
    int n,res=0;
    char s[MAX];
    
    cin>>n>>s;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
            res++;
    }
    cout<<res<<endl;
    
    return 0;
}