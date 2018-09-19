# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution(object):
    def inorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        ans = []
        def i_node_s(root):
        	if root == None:
        		return None
        	if root.left != None:
        		i_node_s(root.left)
        	ans.append(root.val)
        	if root.right != None:
        		i_node_s(root.right)

        i_node_s(root)
        return ans

