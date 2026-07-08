//https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

#include<iostream>
using namespace std;

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* t1 = head;
        ListNode* t2 = head;
        
        //move t2 ahead by n steps
        for(int i=0;i<n;i++){
            t2 = t2->next;
        }

        if(t2==NULL) return head->next;

        while(t2->next != NULL){
            t1 = t1->next;
            t2 = t2->next;
        }

        ListNode* toDel = t1->next;
        t1->next = t1->next->next;
        delete toDel;
        return head;
    }
};