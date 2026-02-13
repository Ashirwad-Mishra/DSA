#include <bits/stdc++.h>
using namespace std;

struct treeNode*
    {
        int val;
        struct treeNode* left;
        struct treeNode* right;
    } typedef treeNode;

treeNode* createNode(int data)
{
    treeNode *newNode;
    newNode->val = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

void insertNode(treeNode* root , int data)
{
    if (root == nullptr)
    {
        treeNode* ans = createNode(data);
        root = ans;
        return;
    }
    if (root -> val < data) insertNode(root->left , data);
    else insertNode(root->right , data);
}

void inorder(treeNode *root)
{
    if (root == nullptr) return;
    inorder(root->left);
    cout << root -> val << "  ";
    inorder(root->right);
}

int main()
{
    treeNode* tree = createNode(0);
    inorder(tree);
}