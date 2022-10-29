#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *next ;
    
    Node(int x)
    {
        key = x;
        next =NULL;
    }
};

Node* insertBegin(Node *head,int key)
{
    Node *temp = new Node(key);
    temp -> next = head;
    return temp;
}

Node* insertEnd(Node *head,int key)
{
    Node *temp = head;
    Node *temp1 = new Node(key);
    while(temp -> next != NULL)
        temp = temp -> next;
    temp -> next = temp1;
    return head;
}

Node* deleteFirstNode(Node *head)
{
    Node *temp = head;
    temp = temp -> next;
    return temp;
}

Node* deleteLastNode(Node *head)
{
    Node *temp = head;
    while(temp -> next -> next != NULL)
    temp = temp ->next;
    temp -> next = NULL;
    
    return head;
}

void Display(Node *head)
{
    Node *temp = head;
    while(temp -> next != NULL)
    {
        cout << temp -> key << " ";
        temp = temp -> next;
    }
    
    cout << temp -> key;
    cout << endl;
}

int main()
{
    Node *head = NULL;
    head = insertBegin(head,5);
    head = insertBegin(head,10);
    Display(head);
    head = insertEnd(head,15);
    head = insertEnd(head,20);
    Display(head);
    head = deleteFirstNode(head);
    Display(head);
    head = deleteLastNode(head);
    Display(head);
    return 0;
}
