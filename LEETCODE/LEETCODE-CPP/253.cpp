//253. Meeting Rooms II
//https://leetcode.com/problems/meeting-rooms-ii/

//Method-1 sorting & min-heap
class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        int n= intervals.size(), room_count=1;
        
        if(n==0)
            return 0;
        
        priority_queue<int, vector<int>, greater<int>> pq;
        sort(intervals.begin(), intervals.end());
        
        pq.push(intervals[0][1]);
        for(int i=1;i<n;i++){
            int x=pq.top();
            
            if(x<=intervals[i][0]){
                pq.pop();
            }
            
            pq.push(intervals[i][1]);
            int s=pq.size();
            room_count= max(room_count,s);
        }
        
        return room_count;
    }
};