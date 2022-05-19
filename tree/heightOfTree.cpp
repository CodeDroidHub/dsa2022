//--------------------height of tree---------------
//-----time complexity 0(n)-----------
#include <iostream>
using namespace std;
class node
{
public:
              int data;
              node *left;
              node *right;
              node(int value)
              {
                            data = value;
                            left = NULL;
                            right = NULL;
              }
};
int maxDepth(node *root)
{
              if (root == NULL)
              {
                            return -1;
              }
              return max(maxDepth(root->left), maxDepth(root->right)) + 1;
}
int main()
{
              node *root = new node(4); // new
              root->left = new node(10);
              root->right = new node(15);
              root->left->left = new node(41);
              root->left->right = new node(55);
              cout << "Height of tree is " << maxDepth(root);
              return 0;
}