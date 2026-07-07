//https://www.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1

#include<iostream>
using namespace std;

class Solution {
  public:
  
   Node* reverse(Node* head) {
        Node* currNode = head;
        Node* prevNode = NULL;
        Node* nextNode = NULL;
        
        while(currNode != NULL){
            nextNode = currNode->next;  
            currNode->next = prevNode;  
            prevNode = currNode;        
            currNode = nextNode;        
        }
        return prevNode; 
    }
  
    bool isPalindrome(Node *head) {
        Node* fast = head;
        Node* slow = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow = reverse(slow);
        Node* p1 = head;
        Node* p2 = slow;
        
        while(p2 != NULL){
            if(p1->data != p2 ->data) return false;
            p1 = p1->next;
            p2 = p2->next;
            
        }
        return true;
    }
};