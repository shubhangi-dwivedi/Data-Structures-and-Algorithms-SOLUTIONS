#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int d[3],s[3];
        
        for(int i=0;i<3;i++)
            cin>>d[i];
        for(int i=0;i<3;i++)
            cin>>s[i];

        int d_tot=0,s_tot=0;

        for(int i=0;i<3;i++)
            d_tot+=d[i];
        for(int i=0;i<3;i++)
            s_tot+=s[i];

        if(d_tot==s_tot){
            if(d[0]>s[0])
                cout<<"DRAGON"<<endl;
            else if(d[0]<s[0])
                cout<<"SLOTH"<<endl;
            else if(d[1]>s[1])
                cout<<"DRAGON"<<endl;
            else if(d[1]<s[1])
                cout<<"SLOTH"<<endl;
            else
                cout<<"TIE"<<endl;
        }
        else if(d_tot>s_tot)
            cout<<"DRAGON"<<endl;
        else if(s_tot>d_tot)
            cout<<"SLOTH"<<endl;
    }
}