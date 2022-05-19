#include <iostream>
#include <limits.h>
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
int maximumTree(node *root)
{
              if (root == NULL)
                            return INT_MIN;
              return max(root->data, max((maximumTree(root->left)), (maximumTree(root->right))));
}
int main()
{

              node *root = new node(2);
              root->left = new node(7);
              root->right = new node(5);
              root->left->right = new node(6);
              root->left->right->left = new node(1);
              root->left->right->right = new node(11);
              root->right->right = new node(9);
              root->right->right->left = new node(4);
              cout << maximumTree << endl;
              return 0;
}