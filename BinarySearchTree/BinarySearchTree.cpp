#include <bits/stdc++.h>
using namespace std;
class BST
{
    public:
        struct treeNode
        {
            int val;
            treeNode* left;
            treeNode* right;
        }typedef treeNode;
    public:
        treeNode* root;
        BST()
        {
            root = NULL;
        }
        treeNode* getNewNode(int val)
        {
            treeNode* newNode = new treeNode();
            newNode->val = val;
            newNode->left = NULL;
            newNode->right = NULL;
            return newNode;
        }
        treeNode* insert(treeNode* node, int val)
        {
            if (node == NULL)
            {
                return getNewNode(val);
            }
            if (val < node->val)
            {
                node->left = insert(node->left, val);
            }
            else
            {
                node->right = insert(node->right, val);
            }
            return node;
        }
        void inorder(treeNode* node)
        {
            if (node == NULL) return;
            inorder(node->left);
            cout << node->val << " ";
            inorder(node->right);
        }
        void preorder(treeNode* node)
        {
            if (node == NULL) return;
            cout << node->val << " ";
            preorder(node->left);
            preorder(node->right);
        }
        void postorder(treeNode* node)
        {
            if (node == NULL) return;
            postorder(node->left);
            postorder(node->right);
            cout << node->val << " ";
        }
        treeNode* search(treeNode* node, int val)
        {
            if (node == NULL || node->val == val) return node;
            if (val < node->val) return search(node->left, val);
            return search(node->right, val);
        }
        treeNode* findMin(treeNode* node)
        {
            while (node->left != NULL) node = node->left;
            return node;
        }
        treeNode* deleteNode(treeNode* node, int val)
        {
            if (node == NULL) return node;
            if (val < node->val)
            {
                node->left = deleteNode(node->left, val);
            }
            else if (val > node->val)
            {
                node->right = deleteNode(node->right, val);
            }
            else
            {
                if (node->left == NULL)
                {
                    treeNode* temp = node->right;
                    delete node;
                    return temp;
                }
                else if (node->right == NULL)
                {
                    treeNode* temp = node->left;
                    delete node;
                    return temp;
                }
                treeNode* temp = findMin(node->right);
                node->val = temp->val; 
                node->right = deleteNode(node->right, temp->val);
            }
            return node;
        }
        int height(treeNode* node)
        {
            if (node == NULL) return -1;
            return max(height(node->left), height(node->right)) + 1;
        }
        int countNodes(treeNode* node)
        {
            if (node == NULL) return 0;
            return countNodes(node->left) + countNodes(node->right) + 1;
        }
};

int main()
{
    BST tree;
    while (true)
    {
        cout << "Enter 1 for insertion\nEnter 2 for inorder traversal\nEnter 3 for preorder traversal\nEnter 4 for postorder traversal\nEnter 5 for searching a value\nEnter 6 for deleting a value\nEnter 7 for height of the tree\nEnter 8 for counting nodes\nEnter 9 to exit\n";
        int option;
        cin >> option;
        switch(option)
        {
            case 1:
            {
                int val;
                cout << "Enter value to insert: ";
                cin >> val;
                tree.root = tree.insert(tree.root, val);
                break;
            }
            case 2:
            {
                cout << "Inorder traversal: ";
                tree.inorder(tree.root);
                cout << endl;
                break;
            }
            case 3:
            {
                cout << "Preorder traversal: ";
                tree.preorder(tree.root);
                cout << endl;
                break;
            }
            case 4:
            {
                cout << "Postorder traversal: ";
                tree.postorder(tree.root);
                cout << endl;
                break;
            }
            case 5:
            {
                int val;
                cout << "Enter value to search: ";
                cin >> val;
                BST::treeNode* result = tree.search(tree.root, val);
                if (result != NULL) cout << "Value found: " << result->val << endl;
                else cout << "Value not found" << endl;
                break;
            }
            case 6:
            {
                int val;
                cout << "Enter value to delete: ";
                cin >> val;
                tree.root = tree.deleteNode(tree.root, val);
                break;
            }
            case 7:
            {
                cout << "Height of the tree: " << tree.height(tree.root) << endl;
                break;
            }
            case 8:
            {
                cout << "Number of nodes in the tree: " << tree.countNodes(tree.root) << endl;
                break;
            }
            case 9:
            {
                exit(0);
            }
            default:
            {
                cout << "Invalid option" << endl;
            }
        }
    }
}