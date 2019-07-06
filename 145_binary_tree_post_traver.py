class Solution(object):
    def postorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        la = []
        self.check(root, la)
        return la
    
    
    def check(self, root, la):
        if root == None:
            return
        
        self.check(root.left, la)
        self.check(root.right, la)
        la.append(root.val)