#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char st[1000];
    int a[10]={0};
    int i,x;
    
    scanf("%s",&st);
    
    for(i=0;i<strlen(st);i++)
        if(st[i]>=48 && st[i]<=57)
        {
            x=st[i]-'0';
            a[x]++;
        }
    
    for(i=0; i<10;i++)
        printf("%d ",a[i]);
        
    return 0;
}
