#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
    private:
        int val;
        TreeNode *left;
        TreeNode *right;
    public:
        TreeNode(int data, TreeNode*lft , TreeNode* rgt)
        {
            val = data;
            left = lft;
            right = rgt;
        }
        TreeNode(int data)
        {
            val = data;
            left = nullptr;
            right = nullptr;
        }
        void setLeft(TreeNode* root , int data)
        {
            TreeNode* node = new TreeNode(data);
            root -> left = node;
        }
        TreeNode getRight(TreeNode* root, int data)
        {
            TreeNode* node = new TreeNode(data);
            root -> right = node;
        }
        TreeNode* getLeft(TreeNode* root)
        {
            return root -> left;
        }
        TreeNode getRight(TreeNode* root)
        {
            return root -> right;
        }
        int getVal(TreeNode* root)
        {
            return root -> val;
        }
}

class binaryTree :: TreeNode
{

}