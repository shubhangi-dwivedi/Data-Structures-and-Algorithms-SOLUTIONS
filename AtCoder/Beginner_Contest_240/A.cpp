//A - Edge Checker
//https://atcoder.jp/contests/abc240/tasks/abc240_a

#include<iostream>
#include<cmath>

using namespace std;
 
int main(){
	int a,b;
	cin>>a>>b;
	if(abs(a-b)==1)
      cout<<"Yes";
  	else if(a==1 && b==10)
      cout<<"Yes";
  	else
      cout<<"No";
}