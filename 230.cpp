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

 //recursive approach
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        helper(v, root);
        return v[k-1];
    }
    void helper(vector<int>& v, TreeNode* node){
        if(!node){
            return;
        }
        helper(v, node->left);
        v.push_back(node->val);
        helper(v, node->right);
    }
};
