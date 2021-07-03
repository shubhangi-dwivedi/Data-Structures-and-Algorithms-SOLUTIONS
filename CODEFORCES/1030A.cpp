//1030A - In Search of an Easy Problem

#include<iostream>
 
using namespace std;
 
int main()
{
    int n,a;
    
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        
        if(a!=0)
        {
            cout<<"Hard"<<endl;
            return 0;
        }
    }
    
    cout<<"Easy"<<endl;
    return 0;
}