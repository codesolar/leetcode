class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> li=new ArrayList<List<Integer>>();
        li.add(new ArrayList<Integer>());
        li.get(0).add(1);
        ArrayList<Integer> ar;
        for(int i=1;i<numRows;i++){
            ar=new ArrayList<Integer>();
            ar.add(1);
            for(int j=0;j<li.get(i-1).size()-1;j++){
                ar.add(li.get(i-1).get(j)+li.get(i-1).get(j+1));
            }
            ar.add(1);
            li.add(ar);
        }
        return li;
    }
}