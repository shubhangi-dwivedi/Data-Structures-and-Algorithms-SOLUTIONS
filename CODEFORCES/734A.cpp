//734A - Anton and Danik

#include<iostream>
#include<cstring>

using namespace std;
#define ll long long int

int main()
{
    ll n,a=0,d=0;

    cin>>n;
    char game[n];
    cin>>game;
    
    for(int i=0;i<strlen(game);i++)
    {
        if(game[i]=='A')
            a++;
        else
            d++;
    }
    
    if(a>d)
        cout<<"Anton";
    else if(a<d)
        cout<<"Danik";
    else
        cout<<"Friendship";
        
    return 0;
}