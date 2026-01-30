#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* Next;
};

void print(Node* newNode){
    cout<<"[ ";
    while(newNode != NULL){
        cout<<newNode->data<<" ";
        newNode = newNode->Next;
    }
    cout<<" ]"<<endl;
}

void insertAtEnd(Node** head, int newValue){
    Node* newNode = new Node();
    newNode->data = newValue;
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
int main(){
    // Node* head = new Node();
    // Node* second = new Node();
    // Node* third = new Node();
    // Node* forth = new Node();
    // head->data = 0;
    // head->Next = second;
    // second->data = 1;
    // second->Next = third;
    // third->data = 2;
    // third->Next = forth;
    // forth->data = 3;
    // forth->Next = NULL;

    Node* head = NULL;
    while(true){
        int  n;
        cout<<"Enter element: ";
        cin>>n;
        insertAtEnd(&head, n);
        print(head);
    }
    // insertAtEnd(&head, 4);
    // insertAtEnd(&head, 5);
    // insertAtEnd(&head, 6);
    // print(head);
    
}