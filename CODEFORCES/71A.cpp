//71A - Way Too Long Words

#include<iostream>
#include<cstring>
 
using namespace std;
 
int main()
{
    int t;
    string s;
 
    cin>>t;
    while(t--)
    {
        cin>>s;

        if(s.size()<=10)
            cout<<s<<endl;
        else
            cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
    }
    return 0;
}