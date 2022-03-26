//B- Mex
//https://atcoder.jp/contests/abc245/tasks/abc245_b

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    set<int> s;
    int y;
    for(int i=0;i<n;i++){
        cin>>y;
        s.insert(y);
    }

    int a[2000];
    int i=0;
    for(auto it=s.begin(); it!=s.end(); it++){
        a[i]=*it;
        i++;
    }
    
    int x=0;
    for(int i=0;i<s.size();i++){
        if(a[x++]!=i){
            cout<<i;
            break;
        }
    }
    
}