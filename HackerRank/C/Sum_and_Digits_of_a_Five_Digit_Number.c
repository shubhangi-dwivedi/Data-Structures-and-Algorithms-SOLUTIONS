#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
  int n;
    scanf("%d", &n);
    int digit, temp, sum = 0;
    temp = n;
    while(temp > 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }
        printf("%d",sum);
    return 0;
}
