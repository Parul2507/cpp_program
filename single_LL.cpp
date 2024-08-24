#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node* link;
};

void print(node* head){
    while(head != NULL){
        cout<<head->data<<endl;
        head = head->link;
    }
}

void insertFront(node** head, int newVal){
    node* newNode = new node();
    newNode->data = newVal;
    newNode->link = *head;
    *head = newNode;
}

void insertEnd(node** head, int newVal){
    node* newNode = new node();
    newNode->data = newVal;
    newNode->link = NULL;
    if(*head == NULL){
        *head = newNode;
    }
    node* last = *head;
    while(last->link != NULL){
        last = last->link;
    }

    last->link = newNode;
}

void deleteFront(node*&head){
    if(head == NULL){
        cout<<"laude lag gaye!!"<<endl;
        return;
    }
    node* temp = head;
    head = head->link;
    delete temp;
}

void deleteEnd(node*&head){
    if(head == NULL){
        cout<<"laude lag gaye!!"<<endl;
        return;
    }

    if(head->link == NULL){
        deleteFront(head);
        return;
    }

    node* last = head;
    while(last->link->link != NULL){
        last = last->link;
    }

    delete last->link;
    last->link = NULL;
    return;
}
int main(){
    node* head = new node();
    node* second = new node();
    node* third = new node();

    head->data = 0;
    second->data = 1;
    third->data = 2;

    head->link = second;
    second->link = third;
    third->link = NULL;

    insertFront(&head, -1);
    insertFront(&head, 99);

    insertEnd(&head, 3);
    insertEnd(&head, 99);

    deleteFront(head);

    deleteEnd(head);
    print(head);
}