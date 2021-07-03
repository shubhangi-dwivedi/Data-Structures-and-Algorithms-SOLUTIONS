//Conditional Statements in C

//Method 1
#include <stdio.h>
#include <string.h>

int main()
{
    
    // Write Your Code Here
    int i;
    scanf("%d",&i);
    if(i<=9)
    {
        if(i==1)
            printf("one");
        else if(i==2)
            printf("two");
        else if(i==3)
            printf("three");
        else if(i==4)
            printf("four");
        else if(i==5)
            printf("five");
        else if(i==6)
            printf("six");
        else if(i==7)
            printf("seven");
        else if(i==8)
            printf("eight");
        else
            printf("nine");
    }
    else {
        printf("Greater than 9");
    }
    return 0;

}


//Method 2
#include <stdio.h>
#include <string.h>

char* readline();



int main()
{
    
    // Write Your Code Here
    int i;
    static const char *string[9]={"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d",&i);
    if(i>0 && i<=9)
    {
       printf("%s",string[i-1]); 
    }
    else {
        printf("Greater than 9");
    }
    return 0;

}
