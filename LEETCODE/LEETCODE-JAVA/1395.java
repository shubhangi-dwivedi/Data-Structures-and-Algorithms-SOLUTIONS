//1395. Count Number of Teams
//https://leetcode.com/problems/count-number-of-teams/

class Solution {
    public int numTeams(int[] rating) {
        int n=rating.length;

        int maxAdjSize=0;
        for(int val: rating){
            maxAdjSize=Math.max(maxAdjSize,val);
        }

        List<List<Integer>> adj1=new ArrayList<>();
        List<List<Integer>> adj2=new ArrayList<>();

        for(int i=0;i<=maxAdjSize;i++){
            adj1.add(new ArrayList<>());
            adj2.add(new ArrayList<>());
        }

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(rating[i]>rating[j]){
                    adj1.get(rating[i]).add(rating[j]);
                }
                else if(rating[i]<rating[j]){
                    adj2.get(rating[i]).add(rating[j]);
                }
            }
        }

        int res=0;
        for(int val:rating){
            for(int next:adj1.get(val)){
                res+=adj1.get(next).size();
            }

            for(int next:adj2.get(val)){
                res+=adj2.get(next).size();
            }
        }

        return res;
    }
}