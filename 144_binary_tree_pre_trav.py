class Solution(object):
    def preorderTraversal(self, root):
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
        la.append(root.val)
        self.check(root.left,la)
        self.check(root.right, la)