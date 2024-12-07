//2554. Maximum Number of Integers to Choose From a Range I
//https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i/

//Method-1 two pointers
class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int m=banned.size();
        int count=0;
        
        set<int>st={banned.begin(), banned.end()};
        
        int j=0;
        for(int i=1;i<=n;i++){
            if(j<m && st.find(i)!=st.end()){
                j++;
            }
            else if(maxSum-i>=0){
                count++;
                maxSum-=i;
            }
        }
        
        return count;
    }
};