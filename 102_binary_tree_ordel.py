# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def levelOrder(self, root):
        ans=[]
        def bfs(root, level):
            if root != None:
                if len(ans) < level+1:
                    ans.append([])
                ans[level].append(root.val)
                bfs(root.left, level+1)
                bfs(root.right, level+1)
                
        bfs(root, 0)
        return ans
