//118A - String Task

#include<iostream>
#include<cstring>
#include<cctype>
 
using namespace std;
 
int main()
{
    string s;
    cin>>s;
 
 
    for(int i =0;i<s.length();i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
        {
           ;
        }
 
        else
        {
            if(islower(s[i]))
            {
                cout<<"."<<s[i];
            }
            else
            {
                s[i]=s[i]+32;
                cout<<"."<<s[i];
            }
        }
    }
    return 0;
}