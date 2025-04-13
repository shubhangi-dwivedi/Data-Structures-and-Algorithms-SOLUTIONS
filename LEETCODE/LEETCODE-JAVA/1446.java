// 1446. Consecutive Characters
// https://leetcode.com/problems/consecutive-characters

//Method-1 counting
class Solution {
    public int maxPower(String s) {
        int n=s.length(), count=0, ans=0;

        char st[]=s.toCharArray();

        for(int i=1;i<n;i++){
            if(st[i-1]==st[i]){
                count++;
            }
            else{
                count=0;
            }

            ans=Math.max(ans,count);
        }

        return ans+1;
    }
}