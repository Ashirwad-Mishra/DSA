class BSTTester
{
    public static void main(string []args)
    {
        treeNode tree = new treeNode(0);
        tree.insertNode(5);
        tree.insertNode(4);
        tree.insertNode(3);
        tree.insertNode(2);
        tree.insertNode(1);

        tree.inorder(tree);
    }
}