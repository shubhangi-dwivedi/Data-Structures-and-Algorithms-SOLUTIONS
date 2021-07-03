//479A - Expression

#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    int r[5];
    int *i;
    
    r[0]=a+b*c;
    r[1]=a*(b+c);
    r[2]=a*b*c;
    r[3]=(a+b)*c;
    r[4]=a+b+c;
    
    i=max_element(r,r+5);
    
    cout<<*i<<endl;
    
    return 0;
}