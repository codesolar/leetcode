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
    public int minDepth(TreeNode root) {
        return mheight(root)+1;
    }
    public int mheight(TreeNode root){
        if(root==null) return -1;
        if(root.left==null && root.right==null) return 0;
        if(root.left!=null){
            if(root.right!=null){
                return 1+Math.min(mheight(root.left),mheight(root.right));
                
            }
            else{
                return 1+mheight(root.left);
            }
        }
        return 1+mheight(root.right);
    }
}