// 1942. The Number of the Smallest Unoccupied Chair
// https://leetcode.com/problems/the-number-of-the-smallest-unoccupied-chair/description/

//Metho-1 using heap
class Solution {
    public int smallestChair(int[][] times, int targetFriend) {
        int tArrival=times[targetFriend][0];

        Arrays.sort(times, (a,b) -> Integer.compare(a[0],b[0]));

        PriorityQueue<Integer> availableChairs= new PriorityQueue<>();
        PriorityQueue<int[]> reserved= new PriorityQueue<>((a,b) -> Integer.compare(a[0],b[0]));

        for(int i=0;i<times.length;i++){
            while(!reserved.isEmpty() && reserved.peek()[0]<=times[i][0]){
                availableChairs.add(reserved.poll()[1]);
            }

            if(times[i][0]==tArrival){
                break;
            }

            if(availableChairs.isEmpty()){
                reserved.add(new int[]{times[i][1], reserved.size()});
            }
            else{
                reserved.add(new int[]{times[i][1], availableChairs.poll()});
            }
        }

        return availableChairs.isEmpty()? reserved.size() : availableChairs.peek();
    }
}