class Solution {
//     class com implements Comparator<int[]> {
//     @Override
//     public int compare(int[] a, int[] b) {
//         return a[0]-b[0];
//     }
// }
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals,(a,b) -> a[0] - b[0]);
        ArrayList<int[]> br=new ArrayList<>();
        int s=intervals[0][0];
        int e=intervals[0][1];
        int i=0,j=0;
        while(j<intervals.length){
            if(e>=intervals[j][0]){
                e=Math.max(e,intervals[j][1]);
                j++;
            }
            else if(e<intervals[j][0]){
                br.add(new int[]{intervals[i][0],e});
                i=j;
                if(i<intervals.length)
                    e=intervals[i][1];
            }
        }
        br.add(new int[]{intervals[i][0],e});
        return br.toArray(new int[br.size()][2]);
    }
}