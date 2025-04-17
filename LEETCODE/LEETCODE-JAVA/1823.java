// 1823. Find the Winner of the Circular Game
// https://leetcode.com/problems/find-the-winner-of-the-circular-game

// Method-1 Simulation
class Solution {
    public int findTheWinner(int n, int k) {
        ArrayList<Integer> circle= new ArrayList<>();
        for(int i=0;i<n;i++){
            circle.add(i+1);
        }

        int i=0;
        while(circle.size()>1){
            int ele_remove=(i+k-1)%circle.size();

            circle.remove(ele_remove);
            i=ele_remove;
        }

        return circle.get(0);
    }
}