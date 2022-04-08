//The Cooler Dilemma 1
//https://www.codechef.com/APRIL221D/problems/WATERCOOLER1

#include<iostream>

using namespace std;

int main(){
    int t;

    cin>>t;
    while(t--){
        int x,y,m;
        cin>>x>>y>>m;

        if(x*m<y)
            cout<<"YES"<<endl;
        else    
            cout<<"NO"<<endl;
    }
}