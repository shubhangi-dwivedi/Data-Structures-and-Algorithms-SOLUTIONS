//339A - Helpful Maths

#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
    char s[100];
    int a[100],j=0;
    gets(s);
     
    for(int i=0;i<strlen(s);i+=2)
    {
        a[j]=s[i]-'0';
        j++;
    }
    
    sort(a,a+j);
    
    for(int i=0;i<j-1;i++)
        cout<<a[i]<<"+";
    
    cout<<a[j-1];
    
    return 0;
}