//https://www.geeksforgeeks.org/problems/insert-in-a-sorted-list/1

#include<iostream>
using namespace std;

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
     
        Node* newNode = new Node(data);
        
        
        if (head == NULL || data < head->data) {
            newNode->next = head;
            return newNode; 
        }
        
     
        Node* curr = head;
        
    
        while (curr->next != NULL && curr->next->data < data) {
            curr = curr->next;
        }
        
       
        newNode->next = curr->next;
        curr->next = newNode;
        
        return head;
    }
};