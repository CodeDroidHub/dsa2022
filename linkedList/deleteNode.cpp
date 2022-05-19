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
void insertAtTail(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
{
    head=n;
    return ;
}
node* curr=head;
while(curr->next!=NULL)
{
    curr=curr->next;
}
curr->next=n;
}




void deleteNode(node* &head,int key)
{
    if(head==NULL)//for no element
    return;
    node* temp= head;
    node* prev=NULL;
    if(temp->data==key)
    {//for single element in list
        head=temp->next;
        delete temp;
        return;
    }
    else
    {
        while(temp->data!=key)//searching key in list
        {
            prev=temp;
            temp=temp->next;
        }
        if(temp==NULL)//if there is no element then return null
        return;
        prev->next=temp->next; 
        //agar hai toh prev ke next me temp->next dalo
         //temp ko delete kr do.
        delete temp;
    }
 
}
void display(node *head)
{
    node* curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
   
    cout<<endl;
}
int main()
{   
    node *head=NULL;
    insertAtTail(head,45);
    insertAtTail(head,74);
    insertAtTail(head,12);
    insertAtTail(head,78);
    display(head);
    cout<<"after deletion"<<endl;
    deleteNode(head,45);
   display(head);
    return 0;
}
