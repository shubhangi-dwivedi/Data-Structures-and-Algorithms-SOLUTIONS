//791A - Bear and Big Brother

#include<iostream>
 
using namespace std;
 
int main()
{
    long int i,a,b,a_r=1,b_r=1;
    
    cin>>a>>b;
    
    a_r=a;
    b_r=b;
    
    for( i=0;a_r<=b_r;i++)
    {
        a_r=a_r*3;
        b_r=b_r*2;
    }
    
    cout<<i<<endl;
    
    return 0;
}