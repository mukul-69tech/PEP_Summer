//https://leetcode.com/problems/partition-list/

#include<iostream>
using namespace std;

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if (!head) return nullptr;
        
        ListNode* leftDummy = new ListNode(-1);
        ListNode* rightDummy = new ListNode(-1);
        
        ListNode* left = leftDummy;
        ListNode* right = rightDummy;
        ListNode* curr = head;
        
        while (curr != nullptr) {
            if (curr->val < x) {
                left->next = curr;
                left = left->next;
            } else {
                right->next = curr;
                right = right->next;
            }
            curr = curr->next;
        }
        
        // Connect the two partitions
        left->next = rightDummy->next;
        right->next = nullptr;  // Important: terminate the list
        
        ListNode* result = leftDummy->next;
        
        // Optional: clean up dummy nodes (good practice)
        delete leftDummy;
        delete rightDummy;
        
        return result;
    }
};