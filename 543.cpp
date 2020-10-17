/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxd = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        helper(root);
        return maxd;
    }
    int helper(TreeNode* root) {
        if(!root){
            return 0;
        }
        int leftval = helper(root->left);
        int rightval = helper(root->right);
        int a = max(leftval, rightval) + 1;
        maxd = max(maxd, leftval+rightval);
        return a;
    }
};
