#include<iostream>

using namespace std;

int main(){
    int t;

    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;

        if(x==y && z%x==0)
            cout<<"ANYONE"<<endl;
        else if(z%x==0)
            cout<<"CHICKEN"<<endl;
        else if(z%y==0)
            cout<<"DUCK"<<endl;
        else
            cout<<"NONE"<<endl;
            
    }
}