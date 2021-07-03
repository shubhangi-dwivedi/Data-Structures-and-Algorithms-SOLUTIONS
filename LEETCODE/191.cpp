//191. Number of 1 Bits

class Solution {
public:
int hammingWeight(uint32_t n) {

    int count=0,mask=1;
    
    for(int i=1;i<=32;i++)
    {
        if(n & mask)
            count++;
        
        n>>=1;
    }
    return count;
}
};