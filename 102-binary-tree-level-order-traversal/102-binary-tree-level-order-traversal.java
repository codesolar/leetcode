/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> li=new ArrayList<List<Integer>>();
        List<TreeNode> lii;
        List<List<TreeNode>>queue=new ArrayList<List<TreeNode>>();
        if(root!=null){
            lii=new ArrayList<TreeNode>();
            lii.add(root);
            queue.add(lii);
            while(true){
                Iterator<TreeNode> itr=queue.get(queue.size()-1).listIterator();
                //System.out.print(queue.get(queue.size()-1));
                lii=new ArrayList<TreeNode>();
                while(itr.hasNext()){
                    TreeNode u=itr.next();
                    TreeNode v_l=u.left;
                    TreeNode v_r=u.right;
                    if(v_l!=null) lii.add(v_l);
                    if(v_r!=null) lii.add(v_r);
                    
                }
                if(!lii.isEmpty()){
                    queue.add(lii);
                }
                else break;
            }
            List<Integer> numli;
            Iterator<List<TreeNode>> itr=queue.listIterator();
            while(itr.hasNext()){
                numli=new ArrayList<Integer>();
                Iterator<TreeNode> it=itr.next().listIterator();
                while(it.hasNext()){
                    numli.add(it.next().val);
                }
                li.add(numli);
            }
        }
        return li;
        
    }
}