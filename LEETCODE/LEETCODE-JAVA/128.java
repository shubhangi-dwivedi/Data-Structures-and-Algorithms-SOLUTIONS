//128. Longest Consecutive Sequence
//https://leetcode.com/problems/longest-consecutive-sequence/description/

//Method-1 (sorting)
class Solution {
    public int longestConsecutive(int[] nums) {
        int n=nums.length, ans=1;

        if(n==0){
            return 0;
        }

        Arrays.sort(nums);

        int currSmallest=nums[0], temp_len=1;
        for(int i=1;i<n;i++){
            if(nums[i]==currSmallest){
                continue;
            }

            if(nums[i]==currSmallest+1){
                temp_len++;
            }
            else{
                temp_len=1;
            }

            currSmallest=nums[i];

            ans=Math.max(ans,temp_len);
        }

        return ans;
    }
}


//Method-1 (Using set)
class Solution {
    public int longestConsecutive(int[] nums) {
        int n=nums.length, ans=1;

        if(n==0){
            return 0;
        }

        Set<Integer> s = new HashSet<>();
        int temp_len=1;
        for(int i=0;i<n;i++){
            s.add(nums[i]);
        }

        for(int x:s){
            temp_len=1;
            if(!s.contains(x-1)){
                while(s.contains(x+1)){
                    temp_len++;
                    x++;
                }
            }

            ans=Math.max(ans,temp_len);
        }

        return ans;
    }
}