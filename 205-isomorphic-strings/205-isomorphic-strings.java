class Solution {
    public boolean isIsomorphic(String s, String t) {
        Map<Character,Character> mp=new HashMap<Character,Character>();
        if(s.length()!=t.length()) return false;
        else{
            //System.out.print(1);
            for(int i=0;i<s.length();i++){
                //System.out.print(i+" ");
                if(mp.containsKey(Character.valueOf(s.charAt(i)))==false && mp.containsValue(Character.valueOf(t.charAt(i)))==false){
                    mp.put(Character.valueOf(s.charAt(i)),Character.valueOf(t.charAt(i)));
                    //System.out.println("if"+mp.toString());
                }
                else if(mp.containsKey(Character.valueOf(s.charAt(i)))==false){
                    return false;
                }
                else{
                    if(mp.get(Character.valueOf(s.charAt(i))).equals(Character.valueOf(t.charAt(i)))==false){
                        //System.out.println("false-i"+i);
                        return false;
                    }
                    //System.out.println("else");
                }
            }
            return true;
        }
    }
}