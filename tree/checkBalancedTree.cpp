// condition for balanced tree is
// difference of left subtree-right subtree<=1
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
int heightTree(node *root)
{
              if (root == NULL)
              {
                            return -1;
              }
              return max(heightTree(root->left), heightTree(root->right)) + 1;
}
bool balancedTree(node *root)
{
              if (root == NULL)
              {
                            return true;
              }
              int left = heightTree(root->left);
              int right = heightTree(root->right);
              if (abs(left - right) <= 1)
              {
                            return true;
              }
              return false;
              balancedTree(root->left);
              balancedTree(root->right);
}
int main()
{
              node *root = new node(5);
              root->left = new node(13);
              root->right = new node(131);
              root->left->left = new node(123);
              root->left->right = new node(1213);
              root->left->left->left = new node(123);
              root->left->left->right = new node(1213);

              cout << "height of tree is"
                   << " =" << heightTree(root) << endl;
              if (balancedTree(root) == true)
              {
                            cout << "yes" << endl;
              }
              else
                            cout << "no" << endl;
              return 0;
}
