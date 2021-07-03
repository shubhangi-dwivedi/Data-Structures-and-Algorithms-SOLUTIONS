//96A - Football

#include<iostream>
#include<cstring>
 
using namespace std;
 
int main()
{
    char s[100];
    int count=1;
    
    cin>>s;
    for(int i=0;i<strlen(s)-1;i++)
    {
        if(s[i]==s[i+1])
            count++;
        else
            count=1;
            
        if(count==7)
        {
           cout<<"YES";
           return 0;
        }
    }
    cout<<"NO";
    return 0;
}