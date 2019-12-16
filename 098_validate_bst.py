# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isValidBST(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        def bts2list(root):
            if root == None:
                return []
            res = []
            res += bts2list(root.left)
            res.append(root.val)
            res += bts2list(root.right)
            return res
        
        res = bts2list(root)

        if res != sorted(list(set(res))):
            return False
        else:
            return True
