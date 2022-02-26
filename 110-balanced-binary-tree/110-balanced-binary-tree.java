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
    public boolean isBalanced(TreeNode root) {
        if(root==null) return true;
        if(root.left==null && root.right==null) return true;
        if((isBalanced(root.left) && isBalanced(root.right))&&((height(root.left)-height(root.right)==1) ||(height(root.left)-height(root.right))==-1 || (height(root.left)==height(root.right)))){
            return true;
        }
        else return false;
    }
    public int height(TreeNode root){
        if(root==null) return -1;
        if(root.left==null && root.right==null) return 0;
        if(root.left!=null){
            if(root.right==null){
                return 1+height(root.left);
            }
            else{
                return 1+Math.max(height(root.left),height(root.right));
            }
        }

                return 1+height(root.right);
    }
}