#include<iostream>

using namespace std;

class Node{
    public:
    int Value;
    Node* Next;
};

void printList(Node *n){
    while(n!=NULL){
        cout<< n->Value <<endl;
        n = n->Next;
    }
}

void InsertAtFront(Node **head, int newValue){
    Node* newNode = new Node();
    newNode->Value = newValue;
    newNode->Next = *head;
    *head = newNode;
}
int main(){

    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *forth = new Node();

    head->Value = 1;
    head->Next = second;
    second->Value = 2;
    second->Next = third;
    third->Value = 3;
    third->Next = forth;
    forth->Value = 4;
    forth->Next = NULL;

    InsertAtFront(&head, 0);

    printList(head);
    return 0;
}