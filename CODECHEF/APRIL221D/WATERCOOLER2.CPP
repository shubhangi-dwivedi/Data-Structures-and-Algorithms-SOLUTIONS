//The Cooler Dilemma 2
//https://www.codechef.com/APRIL221D/problems/WATERCOOLER2

#include<iostream>

using namespace std;

int main(){
    int t;

    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;

        if(y%x!=0)
            cout<<y/x<<endl;
        else{
            cout<<y/x-1<<endl;
        }
    }
}
