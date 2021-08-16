//657. Robot Return to Origin

class Solution {
public:
    bool judgeCircle(string moves) {
        vector<int> dir{1,-1,2,-2};
        int x_dir=0,y_dir=0;
        
        for(int i=0;i<moves.length();i++){
            
            if(moves[i]=='L')
                x_dir+=dir[0];
            else if(moves[i]=='R')
                x_dir+=dir[1];
            
            if(moves[i]=='U')
                y_dir+=dir[2];
            else if(moves[i]=='D')
                y_dir+=dir[3];
        }
        
        return (x_dir==0 && y_dir==0);
    }
    
};