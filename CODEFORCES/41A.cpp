//41A - Translation

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string s1,s2;
    int j;
    
    cin>>s1>>s2;

    if(s1.length()!=s2.length())
    {
        cout<<"NO";
        return 0;
    }

    for(int i=0; i<s1.length(); i++)
    {
        j=s2.length()-1-i;
        if(s1[i]!=s2[j--])
        {
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";
    
    return 0;
}