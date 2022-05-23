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
    TreeNode secroot;
    public TreeNode invertTree(TreeNode root) {
        secroot=new TreeNode();
        return invert(root);
    }
    public TreeNode invert(TreeNode root){
        TreeNode root1=null;
        if(root!=null){
            root1=new TreeNode();
            root1.val=root.val;
            root1.left=invert(root.right);
            root1.right=invert(root.left);
        }
        return root1;
    }
}