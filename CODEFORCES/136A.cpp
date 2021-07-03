//136A - Presents

#include<iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    
    int gift[n];
    
    for(int i=1;i<=n;i++)
    {
        int j;
        cin>>j;
        gift[j]=i;
    }
    
    for(int i=1;i<=n;i++)
        cout<<gift[i]<<" ";
        
    return 0;
}