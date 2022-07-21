class node:
    def __init__(self,key):
        self.left=None
        self.right=None
        self.val=key
def travel(root):
    if root:
        travel(root.left)
        travel(root.right)
        print(root.val)
root=node(1)
root.left=node(2)
root.right=node(3)


travel(root)