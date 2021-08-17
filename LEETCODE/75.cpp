//75. Sort Colors

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0=0,count1=0,count2=0;
        
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            switch(nums[i]){
                case 0: count0++;
                        break;
                case 1: count1++;
                        break;
                case 2: count2++;
                    break;
            }
        }
        
        int i=0;
        while(count0){
            nums[i]=0;
            count0--;
            i++;
        }
        
        while(count1){
            nums[i]=1;
            count1--;
            i++;
        }
        
        while(count2){
            nums[i]=2;
            count2--;
            i++;
        }
        
    }
};