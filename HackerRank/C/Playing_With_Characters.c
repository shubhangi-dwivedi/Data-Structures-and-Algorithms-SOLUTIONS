#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[10];
    char sen[50];
    scanf("%c",&ch);
    printf("%c\n",ch);
    scanf("%s",s);
    puts(s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    scanf("\n");
    puts(sen);

        
    return 0;
}
