//1232. Check If It Is a Straight Line

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        int n=coordinates.size();
        
        if(n<2)
            return false;
        else if(n==2)
            return true;
        
        int x=coordinates[0][0]-coordinates[1][0], y=coordinates[0][1]-coordinates[1][1];
        
        int new_x, new_y;
        for(int i=2;i<n;i++)
        {
            new_x=coordinates[i][0]-coordinates[1][0];
            new_y=coordinates[i][1]-coordinates[1][1];
            
            if(x*new_y != y*new_x)
                return false;
        }        
        
        
        return true;
    }
};