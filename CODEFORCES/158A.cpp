//158A - Next Round

#include<iostream>
 
using namespace std;
 
int main()
{
    int n,k;
    
    cin>>n>>k;
    int x,y;
    int i=0;
    
    while(1)
    {
        i++;
        if(i>n)
            break;
        cin>>x;
        if(i>k && x<y)
            break;
        if(x<=0)
            break;
        if(i==k)
            y=x;
    }
    
    cout<<i-1<<endl;
    
    return 0;
}