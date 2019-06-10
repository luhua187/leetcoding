# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isBalanced(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if root == None:
            return True
        if abs(self.maxdeep(root.left) - self.maxdeep(root.right)) <= 1:
            return self.isBalanced(root.left) and self.isBalanced(root.right)
        else:
            return False
        
        
    def maxdeep(self, root):
        if root == None:
            return 0
        else:
            return max(self.maxdeep(root.left)+1, self.maxdeep(root.right)+1)