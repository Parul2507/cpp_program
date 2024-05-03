#include<iostream>

using namespace std;

class Node{
    public:
    int Value;
    Node* Next;
};

void printList(Node *head){
    while(head != NULL){
        cout<< head->Value <<" ";
        head = head->Next;
    }
    cout<<endl;
}

void insertAtFront(Node** head, int newValue){
    Node* newNode = new Node();
    newNode->Value = newValue;
    newNode->Next = *head;
    *head = newNode;
}

void insertAtEnd(Node** head, int newValue){
    Node* newNode = new Node();
    newNode->Value = newValue;
    newNode->Next = NULL;
    if(*head == NULL){
        *head = newNode;
        return;
    }
    Node* last = *head;
    while(last->Next != NULL){
        last = last->Next;
    }
    last->Next = newNode;
}

void insertAfter(Node* privious, int newValue){
    if(privious == NULL){
        cout<<"Privious node can not be NULL!..";
        return;
    }

    Node* newNode = new Node();
    newNode->Value = newValue;
    newNode->Next = privious->Next;
    privious->Next = newNode;
}
int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->Value = 1;
    head->Next = second;
    second->Value = 2;
    second->Next = third;
    third->Value = 3;
    third->Next = NULL;

    insertAtFront(&head, 0);
    insertAtEnd(&head, 4);
    insertAfter(second, 44);
    printList(head);
}