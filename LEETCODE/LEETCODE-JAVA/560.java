// 560. Subarray Sum Equals K
// https://leetcode.com/problems/subarray-sum-equals-k/

// Method-1 Prefix Sum (Time- O(n))
class Solution {
    public int subarraySum(int[] nums, int k) {
        int prefSum = 0, res = 0;
        Map<Integer, Integer> sumFreq = new HashMap<>();

        sumFreq.put(0, 1);
        for(int i: nums){
            prefSum+=i;

            if(sumFreq.containsKey(prefSum-k)){
                res+=sumFreq.get(prefSum-k);
            }

            sumFreq.put(prefSum, sumFreq.getOrDefault(prefSum, 0) + 1);
        }

        return res;
    }
}