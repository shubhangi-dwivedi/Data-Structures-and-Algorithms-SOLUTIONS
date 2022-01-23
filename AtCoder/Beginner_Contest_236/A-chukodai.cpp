#include<bits/stdc++.h>

using namespace std;

int main(){

  string s;
  getline(cin,s);
  
  int a,b;
  cin>>a>>b;
  
  int n=s.length();

  if(a<n && b<=n)
    swap(s[a-1],s[b-1]);
  
  cout<<s;
}