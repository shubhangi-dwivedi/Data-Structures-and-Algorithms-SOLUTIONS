//282A - Bit++

#include<iostream>
 
using namespace std;
 
int main()
{
    int n,x=0;
    cin>>n;
    
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=="--X"||s[i]=="X--"||s[i]=="--x"||s[i]=="x--")
            --x;
        else if(s[i]=="++X"||s[i]=="X++"||s[i]=="++x"||s[i]=="x++")
            ++x;
    }   
    
    cout<<x<<endl;
    
    return 0;
}