//1422. Maximum Score After Splitting a String
//https://leetcode.com/problems/maximum-score-after-splitting-a-string/description

//Method-1
class Solution {
public:
    int maxScore(string s) {
        int n=s.length();
        int oneSum=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                oneSum++;
            }
        }

        int ans=INT_MIN;
        int zeroSum=0;

        for(int i=0;i<n-1;i++){
            if(s[i]=='0'){
                zeroSum++;
            }
            else{
                oneSum--;
            }

            ans=max(ans,zeroSum+oneSum);
        }

        return ans;
    }
};