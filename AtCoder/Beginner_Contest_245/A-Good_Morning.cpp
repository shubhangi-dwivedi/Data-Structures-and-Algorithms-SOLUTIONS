//A - Good morning
//https://atcoder.jp/contests/abc245/tasks/abc245_a

#include<iostream>

using namespace std;

int main(){
    int a,b,c,d;

    cin>>a>>b>>c>>d;

    if(a<c)
        cout<<"Takahashi";
    else if(c<a)
        cout<<"Aoki";
    else if(a==c){
        if(b<d || b==d)
            cout<<"Takahashi";
        else    
            cout<<"Aoki";
    }
}