//Chef and Races
//https://www.codechef.com/MARCH222C/problems/CHEFRACES

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;

    cin>>t;
    while(t--){
        int a[4];
        for(int i=0;i<4;i++)
            cin>>a[i];

        map<int,int> m;
        for(int i=0;i<4;i++)
            m[a[i]]++;

        int count=0;

        for (auto i = m.begin(); i != m.end(); i++){
            if(i->second>1)
                count++;
        }

        if(count==1)
            cout<<1<<endl;
        else if(count==2)
            cout<<0<<endl;
        else
            cout<<2<<endl;       
    }
}