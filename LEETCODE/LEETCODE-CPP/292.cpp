//292. Nim Game
//https://leetcode.com/problems/nim-game/?envType=problem-list-v2&envId=brainteaser

class Solution {
public:
    bool canWinNim(int n) {
        return (n%4!=0);
    }
};