# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def generateTrees(self, n):
        """
        :type n: int
        :rtype: List[TreeNode]
        """
        if n == 0:
            return []
        return self.generateTreesA(1,n)
        
    def generateTreesA(self, left, right):
        if left > right:
            return [None]
        res = []
        for i in range(left, right+1):
            left_nodes = self.generateTreesA(left,i-1)
            right_nodes = self.generateTreesA(i+1, right)
            for left_node in left_nodes:
                for right_node in right_nodes:
                    root = TreeNode(i)
                    root.left = left_node
                    root.right = right_node
                    res.append(root)
        return res