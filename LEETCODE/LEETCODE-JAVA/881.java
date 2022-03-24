//881. Boats to Save People
//https://leetcode.com/problems/boats-to-save-people/

//Method-1 (Greedy approach) (Time complexity - O(n),  Space complexity - O(1))
class Solution {
    public int numRescueBoats(int[] people, int limit) {
        int i=0, j =people.length-1;
        int res=0;
        
        Arrays.sort(people);
        
        while(i<=j){
            res++;
            if(people[i]+people[j]<=limit)
                i++;
            j--;
        }
        
        return res;
    }
}