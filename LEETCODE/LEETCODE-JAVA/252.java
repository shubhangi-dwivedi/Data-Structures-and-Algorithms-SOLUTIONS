// 252. Meeting Rooms
// https://leetcode.com/problems/meeting-rooms/description/

// Method-1 using sorting
class Solution {
    public boolean canAttendMeetings(int[][] intervals) {
        int n=intervals.length;

        Arrays.sort(intervals, (a,b)->a[0]-b[0]);
        for(int i=1;i<n;i++){
            if(intervals[i-1][1]>intervals[i][0]){
                return false;
            }
        }

        return true;
    }
}