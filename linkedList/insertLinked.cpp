#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;

    }
};

 node* insertAtTail(node* &head,int val )
 {
     node* n=new node(val);
     if(head==NULL)
     {
         head=n;
         return head;
          
     }
     node* temp=head;
     while(temp->next!=NULL)
     {
       temp=temp->next;
     }
     temp->next=n;

return head;
 }
 void display(node *head)
 {
     node* temp=head;
     while(temp!=NULL)
     {
         cout<<temp->data<<" ";
         temp=temp->next;
     }
     cout<<endl;
 }
 int main()
 {
     node *head=NULL;
     insertAtTail(head,1);
     insertAtTail(head,45);
     insertAtTail(head,13);
     insertAtTail(head,345);
     insertAtTail(head,12);
     insertAtTail(head,435);
    
     display(head);
     return 0;
 }
