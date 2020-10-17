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
    bool isSymmetric(TreeNode* root) {
        if(!root){
            return true;
        }
        TreeNode* left = root->left;
        TreeNode* right = root->right;
        return symmetricHelper(left, right);
    }

    bool symmetricHelper(TreeNode* left, TreeNode* right){
        if(!left && !right){
            return true;
        } else if (!left ^ !right){
            return false;
        }
        bool s1 = symmetricHelper(left->right, right->left);
        bool s2 = symmetricHelper(left->left, right->right);
        bool s3 = (left->val == right->val);
        return s1 && s2 && s3;
    }
};
