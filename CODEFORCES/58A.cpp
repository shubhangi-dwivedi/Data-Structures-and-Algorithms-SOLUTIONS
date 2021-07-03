//58A - Chat room

#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
    char s[101];

    cin >> s;
    
    int i, c=0;
    
    for(i=0; i<strlen(s) ; i++)
        if(s[i]=='h')
        {
            c++;
            i++;
            break;
        }
    
    for(; i<strlen(s) ; i++)
        if(s[i]=='e')
        {
            c++;
            i++;
            break;
        }
    
    for(; i<strlen(s) ; i++)
        if(s[i]=='l')
        {
            c++;
            i++;
            break;
        }
    
    for(; i<strlen(s) ; i++)
        if(s[i]=='l')
        {
            c++;
            i++;
            break;
        }
    
    for(; i<strlen(s) ; i++)
        if(s[i]=='o')
        {
            c++;
            break;
        }
    
    if(c==5)
        cout << "YES";
    else 
        cout << "NO";
    
    return 0;
}