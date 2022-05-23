class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack=new Stack<>();
        for(int i=0;i<s.length();i++){
            char c=s.charAt(i),d;
            if(c=='(' || c=='{' || c=='['){
                stack.push(Character.valueOf(c));
            }
            if(c==')' || c=='}' || c==']'){
                if(stack.isEmpty()) return false;
                d=stack.pop();
                if((c==')' && d=='(') || (c=='}' && d=='{') || (c==']' && d=='[')){
                    continue;
                }
                else return false;
            }
        }
        if(stack.isEmpty()) return true;
        return false;
    }
}