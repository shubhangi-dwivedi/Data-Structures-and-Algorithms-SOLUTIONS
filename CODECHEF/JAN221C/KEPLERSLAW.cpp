//Keplers Law

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int t1,t2,r1,r2;

        cin>>t1>>t2>>r1>>r2;

        double x=pow(t1,2)/pow(r1,3);
        double y=pow(t2,2)/pow(r2,3);

        if(x==y)
            cout<<"YES";
        else
            cout<<"NO";
    }
}