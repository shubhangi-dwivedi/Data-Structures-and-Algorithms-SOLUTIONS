//78. Subsets
//https://leetcode.com/problems/subsets/description/

//Method-1 using backtracking & recursion
class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> temp = new ArrayList<>();
        int n = nums.length;

        helper(nums, ans, temp, n, 0);
        return ans;
    }

    private void helper(int[] nums, List<List<Integer>> ans, List<Integer> temp, int n, int idx) {
        ans.add(new ArrayList<>(temp));  

        for (int i = idx; i < n; i++) {
            temp.add(nums[i]);                      
            helper(nums, ans, temp, n, i + 1);       
            temp.remove(temp.size() - 1);            
        }
    }
}