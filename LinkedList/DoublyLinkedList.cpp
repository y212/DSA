#include <bits/stdc++.h>
using namespace std;

struct Node{
    
    int key;
    Node *right;
    Node *left;
    
    Node(int x){
        key = x;
        right = NULL;
        left = NULL;
    }
    
};

Node* insertBegin(Node *head,int key)
{
    if(head == NULL)
     return new Node(key);
     
    Node *temp = new Node(key);
    temp -> right = head;
    head -> left = temp;
    return temp;
}

Node* insertEnd(Node *head,int key)
{
     if(head == NULL)
       return new Node(key);
       
    Node *temp = new Node(key);
    Node *curr = head;
    
    while(curr -> right != NULL)
         curr = curr -> right;
    
    curr -> right = temp;
    temp -> left = curr;
    return head;
}

Node* deleteBegin(Node *head)
{
    Node *temp = head;
    temp = temp ->right;
    temp -> left = NULL;
    return temp;
}

Node* deleteEnd(Node *head)
{
    Node *temp = head;
    
    while(temp -> right != NULL)
        temp = temp -> right;
    
    Node *prev = temp;
    prev = temp -> left;
    prev -> right = NULL;
    
    return head;
}

void display(Node *head)
{
    Node *curr = head;
    while(curr != NULL)
    {
        cout << curr -> key << " ";
        curr = curr -> right;
    }
    
    cout << endl;
}

int main()
{
    Node *head = NULL;
    head = insertBegin(head,5);
    head = insertBegin(head,4);
    display(head);
    head = insertEnd(head,6);
    head = insertEnd(head,7);
    display(head);
    head = deleteBegin(head);
    display(head);
    head = deleteEnd(head);
    display(head);
    
    return 0;
}