//Chef and Fixed Deposits
//https://www.codechef.com/JAN222C/problems/MINFD

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;

        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];

        sort(a.begin(),a.end(),greater<int>());
        int count=0;

        for(int i=0;i<n;i++){
            if(x>0){
                x-=a[i];
                count++;
            }
            else 
                break;
        }

        if(x>0)
            cout<<-1<<endl;
        else
            cout<<count<<endl;

    }
}