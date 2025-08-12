// 205. Isomorphic Strings
// https://leetcode.com/problems/isomorphic-strings/

class Solution {
    public boolean isIsomorphic(String s, String t) {
        int m=s.length(), n=t.length();

        if(m!=n){
            return false;
        }

        HashMap<Character,Character> sMap= new HashMap<>();
        HashMap<Character,Character> tMap= new HashMap<>();

        for(int i=0;i<m;i++){
            char x=s.charAt(i), y=t.charAt(i);

            if(sMap.containsKey(x) && sMap.get(x)!=y){
                return false;
            }
            if(tMap.containsKey(y) && tMap.get(y)!=x){
                return false;
            }

            sMap.put(x,y);
            tMap.put(y,x);

        }

        return true;
    }
}