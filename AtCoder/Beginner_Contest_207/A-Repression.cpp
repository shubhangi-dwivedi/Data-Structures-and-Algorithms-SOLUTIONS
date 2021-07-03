//A - Repression

#include<iostream>

using namespace std;

int main()
{
  int a,b,c,sum1=0,sum2=0,sum3=0;
  cin>>a>>b>>c;
  
  sum1=a+b;
  sum2=b+c;
  sum3=a+c;
  
  if(sum1>=sum2 && sum1>=sum3)
    cout<<sum1;
  else if(sum2>=sum1 && sum2>=sum3)
    cout<<sum2;
  else
    cout<<sum3;
  
  return 0;
}