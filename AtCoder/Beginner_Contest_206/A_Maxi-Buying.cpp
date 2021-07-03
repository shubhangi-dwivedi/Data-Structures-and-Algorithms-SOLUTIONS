//A- Maxi-Buying

#include<bits/stdc++.h>

using namespace std;

int main()
{
 	int n;
  	cin>>n;
    int x=floor(1.08*n);
  	
  	if(x<206)
      cout<<"Yay!"<<endl;
  	else if(x==206)
	  cout<<"so-so"<<endl;
  	else
      cout<<":(";
  
      return 0;
}
