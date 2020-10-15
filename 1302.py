# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def deepestLeavesSum(self, root: TreeNode) -> int:

        dict = {}
        self.helper(root, dict, 0);

        maxdepth = 0
        for x in dict:
            maxdepth = max(x, maxdepth)

        return dict[maxdepth]

    def helper(self, node: TreeNode, dict, depth):
        if(node != None):
            if depth in dict:
                dict[depth] += node.val
            else:
                dict[depth] = node.val
            depth += 1
            self.helper(node.left, dict, depth)
            self.helper(node.right, dict, depth)
            return
