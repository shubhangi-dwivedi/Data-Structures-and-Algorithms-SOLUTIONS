#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    if(a>b&&a>c&&a>d)
    {
        return a;
    }
    else if(c>b&&c>a&&c>b)
    {
        return c;
    }
    else if(d>a&&d>b&&d>c)
    {
        return d;
    }
    else
    {
        return b;
    }

}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
