#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,s1,d1;
    float x,y,s2,d2;
    scanf("%d %d\n",&a,&b);
    s1=a+b;
    d1=a-b;
    printf("%d %d\n",s1,d1);
    scanf("%f %f\n",&x,&y);
    s2=x+y;
    d2=x-y;
    printf("%.1f %.1f\n",s2,d2);
    
    return 0;
}
