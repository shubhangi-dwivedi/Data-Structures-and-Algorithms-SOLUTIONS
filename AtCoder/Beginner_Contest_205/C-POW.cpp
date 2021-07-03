//C - POW

#include<iostream>
#include<cmath>

#define ll long long int
using namespace std;

int main()
{
    ll a,b,c;
    cin>>a>>b>>c;

    if(c%2 == 0)
    {
        if(abs(a)==abs(b))
            cout<<"=";
        else if(abs(a)>abs(b))
            cout<<">";
        else
            cout<<"<";
    }

    else
    {
        if(a>b)
            cout<<">";
        else if(a<b)
            cout<<"<";
        else
            cout<<"=";
    }

    return 0;
}