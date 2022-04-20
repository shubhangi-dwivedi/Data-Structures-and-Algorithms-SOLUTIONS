//https://www.codechef.com/START35D/problems/POLTHIEF
//Police and Thief 

#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;

    cin>>t;
    while(t--){
        int x, y;

        cin>>x>>y;

        cout<<abs(x-y)<<endl;
    }
}