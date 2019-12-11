 Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def levelOrderBottom(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
    
        def dfs(root, level, res):
            if root is None:
                return
            if(len(res) <= level):
                res.append([])
            
            res[level].append(root.val)
            dfs(root.left, level+1,res)
            dfs(root.right, level+1, res)

        res = []
        dfs(root, 0, res)
        return res[::-1]