#include<string>
#include<iostream>
using namespace std;

int main() 
{
	string a;
    string b;
    cin>>a>>b;
    
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    char c;
    c=a[0];
    a[0]=b[0];
    b[0]=c;
    cout<<a<<" "<<b; 
    return 0;
}
