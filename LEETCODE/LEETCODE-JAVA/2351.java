// 2351. First Letter to Appear Twice
// https://leetcode.com/problems/first-letter-to-appear-twice/

// Method-1 using hashmap
class Solution {
    public char repeatedCharacter(String s) {
        char st[]=s.toCharArray();

        HashMap<Character, Integer> m= new HashMap<>();
        for(char c: st){
            m.put(c,m.getOrDefault(c,0)+1);

            if(m.get(c)==2){
                return c;
            }
        }

        return '0';

    }
}