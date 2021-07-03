/*
 * Complete the 'utopianTree' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int utopianTree(int n) {
    if(n==0)
        return 1;
    
    if(n==1)
        return 2;
        
    int x=2;
    for(int i=2;i<=n;i++)
    {
        if(i%2==0)
            x++;
        else
            x*=2;
    }
    
    return x;
}
