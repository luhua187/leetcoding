class Solution(object):
    def isUnivalTree(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        val = root.val
        return self.check(root, val)
        
    def check(self, root, val):
        if root == None:
            return True
        if root.val != val:
            return False
        return self.check(root.left, val) and self.check(root.right, val)