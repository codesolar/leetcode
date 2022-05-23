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
    TreeNode x;
    boolean flag;
    public boolean findTarget(TreeNode root, int k) {
       x=root;
        flag=false;
        return find(root,k);
    }
    public boolean find(TreeNode root,int k){
         if(root!=null){
             if(k-root.val!=root.val){
                 flag=flag || search(x,k-root.val);
             }
            flag= flag || find(root.left,k) || find(root.right,k);
        }
        return flag;
    }
    public boolean search(TreeNode x,int target){
        if(x!=null){
            if(x.val>target) return search(x.left,target);
            else if(x.val<target) return search(x.right,target);
            return true;
        }
        return false;
    }
}