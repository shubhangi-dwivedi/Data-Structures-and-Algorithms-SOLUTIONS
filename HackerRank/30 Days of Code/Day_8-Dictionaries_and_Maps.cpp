//Dictionaries and Maps

#include<bits/stdc++.h>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,flag=0;
    string name,number;
    map<string,string> m;
    
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        cin>>name>>number;
        m[name]=number;
    }
    
    while(cin>>name)
    {   
        if (m.find(name)!=m.end())
            cout<<name<<"="<<m.find(name)->second<<endl;
        else 
            cout<<"Not found"<<endl;
    }
    
    return 0;
}
