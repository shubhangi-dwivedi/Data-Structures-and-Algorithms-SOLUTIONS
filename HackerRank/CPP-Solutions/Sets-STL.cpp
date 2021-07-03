#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,x,y;
    set <int> s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        switch(x)
        {
            case 1:
                s.insert(y);
                break;
            case 2:
                s.erase(y);
                break;
            case 3:
            if(s.find(y)==s.end())
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
                break;
        }
    } 
    return 0;
}



