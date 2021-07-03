//110A - Nearly Lucky Number

#include<iostream>
 
using namespace std;
 
int main()
{
   long long int n,rem=0,count=0;
   
   cin>>n;
   
   if(n==0)
   {
       cout<<"NO";
       return 0;
   }
   
   while(n)
   {
       rem=n%10;
       
       if(rem==4 || rem==7)
        count++;
       
        n=n/10;
   }
   
   if(count==4||count==7)
    cout<<"YES"<<endl;
   else
     cout<<"NO";
   
   return 0;
}