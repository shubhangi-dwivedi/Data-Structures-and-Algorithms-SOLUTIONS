//1394. Find Lucky Integer in an Array
//https://leetcode.com/problems/find-lucky-integer-in-an-array/

//Method-1 using map
class Solution {
    public int findLucky(int[] arr) {
        Map<Integer,Integer> freq= new HashMap<>();

        for(int i=0;i<arr.length;i++){
            freq.put(arr[i],freq.getOrDefault(arr[i],0)+1);
        }

        int maxEle=-1;
        for(int key:freq.keySet()){
            if(freq.get(key)==key){
                maxEle=key;
            }
        }

        return maxEle;
    }
}