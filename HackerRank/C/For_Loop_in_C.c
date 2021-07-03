//For Loop in C

#include <stdio.h>
#include <string.h>

int main() 
{
    int a, b, i;
    static const char *string[9]={"one","two","three","four","five","six","seven",           "eight","nine"};
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for( i=a-1;i<b;i++)
    {
        if(i<=8)
            printf("%s\n",string[i]);
        else {
            if((i+1)%2==0)
                printf("even\n");
            else {
                printf("odd\n");
            }
        }
    }
    return 0;
}

