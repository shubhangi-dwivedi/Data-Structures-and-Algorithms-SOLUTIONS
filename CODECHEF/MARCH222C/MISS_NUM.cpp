//Missing Numbers 
//https://www.codechef.com/MARCH222C/problems/MISS_NUM

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;

    cin>>t;
    while(t--){
        int a[4];
        for(int i=0;i<4;i++)
            cin>>a[i];

        sort(a,a+4);

        if(a[0]>=0)
            cout<<-1<<" "<<-1<<endl;

        a[0]=abs(a[0]);

        int x=(a[2]+a[0])/2;
        int y=a[2]-x;

        if((x+y==a[2]) && (x-y==a[0]) && (x*y==a[3]) && (x/y==a[1])){
            cout<<x<<" "<<y<<endl;
        }
        else
            cout<<-1<<" "<<-1<<endl;
    }
}
