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
        List<List<Integer>> res = new ArrayList<List<Integer>>();
        helper(root, res, 0);
        return res;
    }
    public void helper(TreeNode node, List<List<Integer>> res, int depth) {
        if(node == null){
            return;
        }
        if(res.size() < depth+1){
            res.add(new ArrayList<Integer>());
        }
        res.get(depth).add(node.val);
        helper(node.left, res, depth+1);
        helper(node.right, res, depth+1);
    }
}
