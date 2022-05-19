// brute force aproch
// time complexity o(n2)
#include <bits/stdc++.h>
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

// void levelOrder(node *root, int level)
// {
//               if (root == NULL)
//                             return;
//               if (level == 1)
//               {
//                             cout << root->data << " ";
//               }
//               else if (level > 1)
//               {
//                             levelOrder(root->left, level - 1);
//                             levelOrder(root->right, level - 1);
//               }
// }
// int heightTree(node *root)
// {
//               if (root == NULL)
//               {
//                             return 0;
//               }
//               else
//                             return max(heightTree(root->left), heightTree(root->right)) + 1;
// }
// void printLevel(node *root)
// {
//               int n = heightTree(root);
//               for (int i = 1; i <= n; i++)
//               {
//                             levelOrder(root, i);
//               }
// }
// o(n)
void printLevelOrder(node *root)
{
              if (root == NULL)
                            return;
              queue<node *> q;
              q.push(root);
              while (!q.empty())
              {
                            node *curr = q.front();
                            cout << curr->data << " ";
                            q.pop();

                            if (curr->left != NULL)
                                          q.push(curr->left);
                            if (curr->right != NULL)
                                          q.push(curr->right);
              }
}
int main()
{
              node *root = new node(4); // new
              root->left = new node(10);
              root->right = new node(15);
              root->left->left = new node(41);
              root->left->right = new node(55);
              cout << "level order traversal" << endl;
              printLevelOrder(root);
              return 0;
}