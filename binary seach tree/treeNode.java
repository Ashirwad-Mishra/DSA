class treeNode
{
    private int val;
    private treeNode left;
    private treeNode right;

    public treeNode(int val)
    {
        this.val = val;
        this.left = null;
        this.right = null;
    }

    public void inorder(treeNode root)
    {
        if (root == null) return;
        inorder(root.left);
        system.out.print(" " + root.val);
        inorder(root.right);
    }

    public void insertNode(treeNode root , int data)
    {
        if (root == null) return root = new treeNode(data);
        if (data < root.val)
        {
            insertNode(root.left , data);
        }
        else insertNode(root.right , data);
    }
}