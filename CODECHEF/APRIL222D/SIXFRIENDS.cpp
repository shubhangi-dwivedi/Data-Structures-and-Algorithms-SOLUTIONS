//Six Friends 
//https://www.codechef.com/APRIL222D/problems/SIXFRIENDS

#include<iostream>

using namespace std;

int main(){
    int t;

    cin>>t;
    while(t--){
        int x,y;

        cin>>x>>y;

        if(x*3 > y*2)
            cout<<y*2<<endl;
        else    
            cout<<x*3<<endl;
    }
}