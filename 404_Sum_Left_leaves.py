class Solution(object):
    def sumOfLeftLeaves(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root == None:
            return 0
        res = 0
        
        if root.left and self.isLeaf(root.left):
            res += root.left.val
            
        res += self.sumOfLeftLeaves(root.left) + self.sumOfLeftLeaves(root.right)
        return res
    
    def isLeaf(self, root):
        if root.left == None and root.right == None:
            return True
        else:
            return False
    
        