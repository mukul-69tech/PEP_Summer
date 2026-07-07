//https://www.geeksforgeeks.org/problems/reverse-a-linked-list/1

#include<iostream>
using namespace std;

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node* currNode = head;
        Node* prevNode = NULL;
        Node* nextNode = NULL;
        
        while(currNode != NULL){
            nextNode = currNode -> next;
            currNode -> next = prevNode;
            prevNode = currNode;
            currNode = nextNode;
        }
        return prevNode;
    }
};