// 657. Robot Return to Origin
// https://leetcode.com/problems/robot-return-to-origin/description

// Method-1 counting moves
class Solution {
    public boolean judgeCircle(String moves) {
        int x_dir=0, y_dir=0;

        for(int i=0; i<moves.length();i++){
            if(moves.charAt(i)=='L'){
                x_dir--;
            }
            else if(moves.charAt(i)=='R'){
                x_dir++;
            }

            if(moves.charAt(i)=='D'){
                y_dir--;
            }
            else if(moves.charAt(i)=='U'){
                y_dir++;
            }
        }

        return (x_dir==0 && y_dir==0);
    }
}