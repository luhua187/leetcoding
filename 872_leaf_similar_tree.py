class Solution(object):
    def leafSimilar(self, root1, root2):
        """
        :type root1: TreeNode
        :type root2: TreeNode
        :rtype: bool
        """
        la1 = []
        la2 = []
        self.check(root1, la1)
        self.check(root2,la2)
        
        return la1 == la2
        
        
    def check(self, root, la):
        if root == None:
            return
        
        self.check(root.left, la)
        self.check(root.right, la)
        if root.left == None and root.right == None:
            la.append(root.val)