//https://leetcode.com/problems/intersection-of-two-linked-lists/description/


#include<iostream>
using namespace std;

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* pA = headA;
        ListNode* pB = headB;

        while(pA != pB){
            if(pA == NULL){
                pA = headA;
            } else { 
                pA = pA->next;
        }        
          if(pB == NULL){
            pB = headB;
        }
        else { pB = pB->next;
    }
        
    }
    return pA;
}
};