//1025. Divisor Game
//https://leetcode.com/problems/divisor-game/

class Solution {
public:
    bool divisorGame(int n) {
        if(n%2==0)  //if n is even Alice will win
            return true;
        
        return false; //if n is odd Bob will win
    }
};