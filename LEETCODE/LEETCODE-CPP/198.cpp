class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            
            if(i%2==0){
                sum1+=nums[i];
                if(sum1<sum2)
                    sum1=sum2;
            }
            else{
                sum2+=nums[i];
                if(sum2<sum1)
                    sum2=sum1;
            }
                
            
        }
       
        
        return max(sum1,sum2);
    }
};