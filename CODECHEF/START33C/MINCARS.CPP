//Minimum Cars required
//https://www.codechef.com/START33C/problems/MINCARS

#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n<4)
            cout<<1<<endl;
        else{
            int x=n/4;

            if(n%4==0)
                cout<<x<<endl;
            else
                cout<<x+1<<endl;
        }
    }
}