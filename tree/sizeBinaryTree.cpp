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
int sizeTree(node *root)
{
              if (root == NULL)
                            return 0;
              return sizeTree(root->left) + sizeTree(root->right) + 1;
}
int main()
{
              node *root = new node(4);
              root->left = new node(14);
              root->right = new node(12);
              root->left->left = new node(24);
              root->left->right = new node(84);
              root->left->left->left = new node(74);
              cout<<sizeTree(root);
              return 0;
}