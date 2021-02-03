
#include <iostream>

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


//taking &head because we have to modify linklist here
void insertAtTail(node* &head, int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;

    }
    node* temp=head;
    while(temp->next!=NULL)
    {

        temp=temp->next;
    }
    temp->next=n;

}


void display(node* head)
{


    node* temp=head;
    //we can take head too for while

    //temp!=null = NULL;
    while(temp!=NULL)
    {

        cout<<temp->data<<" ";
        temp=temp->next;//here temp  is becoming null at last step.
    }

    cout<<endl;

}

void insertAtHead( node* &head,int data)
{

    node* n=new node(data);
    n->next=head;
    head=n;
}

bool search(node* head,int key)
{
    node* temp=head;
    while(temp!=NULL)
    {

        if(key==temp->data)
        {
            return true;
        }
        temp=temp->next;

    }
    return false;

}

int main()
{

      node* head =NULL;
      insertAtTail(head,1);
      insertAtTail(head,2);
      insertAtTail(head,3);
      insertAtTail(head,3);
      insertAtHead(head,4);
      display(head);
       cout<<search(head,3);
      return 0;
}
