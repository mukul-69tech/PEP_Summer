#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL:
    }
};

void insertAtEnd(Node* &head, int val){
    Node* node = new Node(val);

    if(head == NULL){
        head = node;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = node;

}

void insertAtPosition(Node* &head, int pos, int val){
    Node* node = new Node(val);

    if(pos == 1){
        node->next - head;
        return;
    }
    Node* temp = head;
    for(int i=1;i<pos-1; && temp != NULL; i++){
        temp = temp->next;
    }
    node->next = temp->next;
    temp->next = node;
}

void printevennodes(Node* &head){
    Node* node = new Node();
    for(int i : Node){
        if(Node[i]%2==0){
            cout<<Node[i];
        }
    }
}



void insertAtBegining(Node* &head, val){
    Node* node = new Node(val);
    
    head = node;
    node->next = head;
    node
}


int main(){
    Node* head = NULL;

}