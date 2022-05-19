
/*
Depth First Traversals:
(a) Inorder (Left, Root, Right) : 4 2 5 1 3
(b) Preorder (Root, Left, Right) : 1 2 4 5 3
(c) Postorder (Left, Right, Root) : 4 5 2 3 1
Breadth-First or Level Order Traversal: 1 2 3 4 5
*/

#include <iostream>
using namespace std;
class node
{
public:
              int data;
              node *left;
              node *right;
              node(int val)
              {
                            data = val;
                            left = NULL;
                            right = NULL;
              }
};
void inorderTraversal(node *root)
{
              if (root == NULL)
              {
                            return;
              }
              inorderTraversal(root->left);
              cout << root->data << " ";
              inorderTraversal(root->right);
}
void postTraversal(node *root)
{

              if (root != NULL)
              {
                            postTraversal(root->left);
                            postTraversal(root->right);
                            cout << root->data << " ";
              }
}
void preTraversal(node *root)
{
              if (root == NULL)
                            return;

              cout << root->data << " ";
              preTraversal(root->left);
              preTraversal(root->right);
}
int main()
{
              node *root = new node(4); // new
              root->left = new node(10);
              root->right = new node(15);
              root->left->left = new node(41);
              root->left->right = new node(55);
              cout << "\nPreorder traversal of binary tree is \n";
              preTraversal(root);

              cout << "\nInorder traversal of binary tree is \n";
              inorderTraversal(root);

              cout << "\nPostorder traversal of binary tree is \n";
              postTraversal(root);
              return 0;
}