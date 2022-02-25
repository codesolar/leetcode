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
    ArrayList<Integer> list;
    public List<Integer> inorderTraversal(TreeNode root) {
        list=new ArrayList<>();
        traverse(root);
        return list; 
    }
    public void traverse(TreeNode node){
        if(node!=null){
        if(node.left!=null){
            traverse(node.left);
        }
        list.add(node.val);
        if(node.right!=null){
            traverse(node.right);
        }
        
        }
        return;
    }
}