//59A - Word

#include<iostream>
#include<cctype>
#include<cstring>
 
using namespace std;
 
int main()
{
    char s[100];
    int u=0,l=0;
    
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        if(isupper(s[i]))
            u++;
        else
            l++;
    }
    
    if(u>l)
    {
        for(int i=0;i<strlen(s);i++)
            s[i]=toupper(s[i]);
    }
    else if(l>u || l==u)
    {
        for(int i=0;i<strlen(s);i++)
            s[i]=tolower(s[i]);
    }
 
    cout<<s;
 
    return 0;
}