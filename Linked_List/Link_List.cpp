#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void insertAthead(Node** head,int data)
{
    if(head==NULL)
    {
        *head=new Node(data);
        return;
    }

    Node* n=new Node(data);
    n->next=*head;
    *head=n;
}

void print_List(Node* head)
{
    Node* temp=head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void insertAtPosition(Node** head, int data)
{
    int pos, i = 0;
    cout << "\nEnter Position: ";
    cin >> pos;

    if (pos == 0)
    {
        insertAthead(head, data);
    }
    else
    {
        Node** temp = head;
        temp=&((*temp)->next);

        while (i < pos - 2 && *temp != NULL)
        {
            temp = &((*temp)->next);
            i++;
        }

        if (*temp == NULL)
        {
            cout << "Invalid position." << endl;
            return;
        }

        Node* newNode = new Node(data);
        newNode->next = (*temp)->next;
        (*temp)->next = newNode;
    }
}

Node* recReverse(Node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    Node* sHead=recReverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return sHead;   
}

void reverse(Node* &head)
{
    Node* prev=NULL;
    Node* current=head;
    Node* temp;

    while(current != NULL)
    {
        temp=current->next;
        current->next=prev;
        prev=current;
        current=temp;
    }

    head=prev;
}

Node* kreverse(Node* head, int k)
{
    if(head==NULL)
    {
        return NULL;
    }

    Node* prev;
    Node* current = head;
    Node* temp;
    int cnt=1;

    while(current != NULL && cnt<=k)
    {
        temp=current->next;
        current->next=prev;   

        prev=current;
        current=temp;
        cnt++;
    }

    if(temp != NULL)
    {
        head->next=kreverse(temp,k);
    }

    return prev;
}
Node* merge(Node* a,Node* b)
{
    if(a==NULL)
        return b;
    if(b==NULL)
        return a;

    Node* c;

    if(a->data < b->data)
    {
        c=a;
        c->next=merge(a->next,b);
    }
    else
    {
        c=b;
        c->next=merge(a,b->next);
    }

    return c;
}

Node* midPoint(Node* head)
{
    Node* slow = head;
    Node* fast = head->next;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}

Node* mergesort(Node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    Node* mid=midPoint(head);

    Node* a = head;
    Node* b = mid->next;
    mid->next = NULL;

    a=mergesort(a);
    b=mergesort(b);

    return merge(a,b);
}

int main()
{
    Node* head = NULL;

    insertAthead(&head,6);
    insertAthead(&head,3);
    insertAthead(&head,2);
    insertAthead(&head,10);
    insertAthead(&head,7);
    insertAthead(&head,5);
    insertAthead(&head,1);

    print_List(head);

    head=mergesort(head);
    cout<<endl;
    print_List(head);

    return 0;
}
