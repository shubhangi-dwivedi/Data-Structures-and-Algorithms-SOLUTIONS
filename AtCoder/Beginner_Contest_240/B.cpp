//B - Count Distinct Integers
//https://atcoder.jp/contests/abc240/tasks/abc240_b

#include<iostream>
#include<cmap>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    map<int,int>m;
    for(int i=0;i<n;i++)
        m[a[i]]++;

    int count=0;
    for(auto i:a)
        count++;

    cout<<count;

}