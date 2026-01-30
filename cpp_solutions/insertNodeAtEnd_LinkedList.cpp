#include <iostream>

using namespace std;

class Node
{
public:
    int Data;
    Node *Next;
};

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->Data << endl;
        n = n->Next;
    }
};

void insertAtFront(Node **head, int newValue)
{
    Node *newNode = new Node();
    newNode->Data = newValue;
    newNode->Next = *head;
    *head = newNode;
};

void insertAtEnd(Node** head, int newValue){
    Node* newNode = new Node();
    newNode->Data = newValue;
    newNode->Next = NULL;

    if(*head == NULL){
        *head = newNode;
        return;
    }

    Node* Last = *head;
    while(Last->Next != NULL){
        Last = Last->Next; 
    }

    Last->Next = newNode;
};
int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->Data = 1;
    head->Next = second;
    second->Data = 2;
    second->Next = third;
    third->Data = 3;
    third->Next = NULL;
    // printList(head);
    // insertAtFront(&head, 0);
    insertAtEnd(&head, 4);
    printList(head);
}
