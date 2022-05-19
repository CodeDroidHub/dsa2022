#include<iostream>
using namespace std;
class node
{
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
    node* n= new node(val);
    if(head==NULL)
    {
    head=n;
    return;
    }
    node* curr=head;
    while(curr->next!=NULL)
    {
    curr=curr->next;

    }
    curr->next=n;
}
node* insertAtGiven(node* &head,int n,int val)
{
    node* na= new node(val);
    
    node* temp=head;
    node* prev;
    while(n--){
        temp=temp->next;
    }
    prev=temp->next;
    temp->next=na;
    na->next=prev;
    return head;


}
void display(node* head)
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
    cout<<"before -:";
    display(head);  
    cout<<endl;
    cout<<"after-:";
    insertAtGiven(head,2,3);
    display(head);
    return 0;



}