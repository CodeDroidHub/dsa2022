#include<iostream>
using namespace std;
 
class node{
 public:
              int data;
              node *next;
              node(int value)
              {
                            value = data;
                             next = NULL;
              }
              void push(node* &head,int data)
    {
        node* temp = new node(data);
        temp->next = head;
        head = temp;
    }
              node* reverseList(node* head)
              {
                                  node *prev = NULL, *curr = head, *temp;
                                  while(curr){
                                                      temp= curr->next;
                                                      curr->next = prev;
                                                      prev = curr;
                                                      curr = temp;
                                  }
                                  return prev;
              }

};
 void push(node* &head,int data)
    {
        node* temp = new node(data);
        temp->next = head;
        head = temp;
    }
int main()
{
                  node* root;
                  root.push(3);
}
