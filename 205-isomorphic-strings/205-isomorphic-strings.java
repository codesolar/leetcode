class Solution {
    public boolean isIsomorphic(String s, String t) {
        Map<Character,Character> mp=new HashMap<Character,Character>();
        if(s.length()!=t.length()) return false;
        else{
            for(int i=0;i<s.length();i++){
                if(mp.containsKey(Character.valueOf(s.charAt(i)))==false && mp.containsValue(Character.valueOf(t.charAt(i)))==false){
                    mp.put(Character.valueOf(s.charAt(i)),Character.valueOf(t.charAt(i)));
                }
                else if(mp.containsKey(Character.valueOf(s.charAt(i)))==false){
                    return false;
                }
                else{
                    if(mp.get(Character.valueOf(s.charAt(i))).equals(Character.valueOf(t.charAt(i)))==false){
                        return false;
                    }
                }
            }
            return true;
        }
    }
}