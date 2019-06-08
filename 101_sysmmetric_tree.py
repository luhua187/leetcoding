# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isSymmetric(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if root:
            return self.check(root.left, root.right)
        return True
    
    def check(self,right, left):
        if right==None and left==None:
            return True
        if right and left and right.val == left.val:
            return self.check(right.right, left.left) and self.check(right.left, left.right)
        return False
