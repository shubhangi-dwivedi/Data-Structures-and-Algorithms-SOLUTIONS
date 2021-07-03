#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,x,a,b,c;
    vector <int> v;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    
    cin>>c>>a>>b;
    v.erase(v.begin()+c-1);
    v.erase(v.begin()+a-1,v.begin()+b-1);
     
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
