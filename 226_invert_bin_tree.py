class Solution(object):
    def invertTree(self, root):
        if root == None:
            return root
        
        tmp = root.left
        root.left  = self.invertTree(root.right)
        root.right = self.invertTree(tmp)
        return root