#include<iostream>
using namespace std;
class Node
{
public:
int value;
Node* next;
Node(int v)
{
value=v;
next=NULL;
}};
void traverse(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void insertAtHead(Node* &head,int val)
{
    Node* newNode= new Node(val);
    newNode->next=head;
    head=newNode;
}
void insertAtEnd(Node* &head,int val)
{ if(head==NULL)
{
insertAtHead(head, val);
return;
}
    Node* newNode= new Node(val);
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}
void insertAtMiddle(Node* &head,int val,int position)
{
    if(position==1)
    {
        insertAtHead(head,val);
    return;
}
Node* newNode= new Node(val);
Node* prev=head;
int count=1;
while(count<(position-1))
{
    prev=prev->next;
    count++;
}
newNode->next=prev->next;
prev->next=newNode;
}
void deleteAtHead(Node* &head)
{
    if(head==NULL)
    {
        return;
    }

    Node* temp=head;
    head=head->next;
    free(temp);
}
void deleteAtEnd(Node* &head)
{if(head==NULL)
{
    return;
}
if(head==NULL)
{
    deleteAtHead(head);
    return;
}
{
    Node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    Node* LastNode=temp->next;
    temp->next=NULL;
    free(LastNode);
}
}
void deleteAtMiddle(Node* &head,int position)
{
    if(position==1)
{
    deleteAtHead(head);
    return;
}
{
    Node* prev=head;
    int count=1;
    while(count<(position-1))
    {
        prev=prev->next;
        count++;
    }
    Node* curr=prev->next;//node to be deleted
    prev->next=curr->next;
    free(curr);
}}
 Node* LinearSearch(Node* &head,int key)
{
    Node* temp=head;
    while(temp)
    {
        if(temp->value==key)

        return temp;

    temp=temp->next;
}
return NULL;
}
int main()
{
    Node* node1=new Node(1);
    Node* node2= new Node(2);
    Node* node3= new Node(3);
    Node* node4= new Node(4);
    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    Node* head=node1;
    traverse(head);
    insertAtHead(head,9);
    traverse(head);
    insertAtEnd(head,6);
    traverse(head);
    insertAtMiddle(head,5,3);
    traverse(head);
    deleteAtHead(head);
    traverse(head);
    deleteAtEnd(head);
    traverse(head);
    deleteAtMiddle(head,2);
    traverse(head);
    Node* q;
    q=LinearSearch(head,4);
    if(q)
        cout<<"element Found in Link list "<<q->value<<endl;
        else
            cout<<"element not found";

}