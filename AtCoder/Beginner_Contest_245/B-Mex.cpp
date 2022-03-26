//B- Mex
//https://atcoder.jp/contests/abc245/tasks/abc245_b

#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;

    vector<long long> a(n);
    for(long long i=0;i<n;i++)
        cin>>a[i];

    for(long long i=0;i<=n;i++){
        bool flag=true;
        for(long long x:a)
            if(x==i){
                flag=false;
            }

            if(flag){
                cout<<i;
                break;
            }

    }
}


/*
int main(){
    long long n;
    cin>>n;

    set<long long> s;
    int y;
    for(long long i=0;i<n;i++){
        cin>>y;
        s.insert(y);
    }

    int a[2000];
    int i=0;
    for(auto it=s.begin(); it!=s.end(); it++){
        a[i]=*it;
        i++;
    }
    
    long long x=0;
    for(long long i=0;i<s.size();i++){
        if(a[x++]!=i){
            cout<<i;
            break;
        }
    }
    
} */