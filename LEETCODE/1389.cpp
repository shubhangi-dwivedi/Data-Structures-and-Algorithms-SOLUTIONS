//1389. Create Target Array in the Given Order

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        
        vector<int> v(nums.size());
        
        for(int i=0;i<nums.size();i++)
        {
            if(v[index[i]]=='\0')
                v[index[i]]=nums[i];
            else
            {
                int j=index[i]+1;
                int temp=v[index[i]];
                v[index[i]]=nums[i];
                
                while(j<v.size())
                {
                    int temp2=v[j];
                    v[j]=temp;
                    temp=temp2;
                    j++;
                }
            }
        }
        
        return v;
    }
};