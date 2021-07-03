//236A - Boy or girl

#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    
    unordered_map<char, int> x;
    for(int i=0;i<s.length();i++)
        x[s[i]]++;
        
    if(x.size()%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
        
    return 0;
}
