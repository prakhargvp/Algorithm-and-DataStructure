// Approach-1: Recursion
// Time Complexity: O(n + m)
// Space Complexity: O(n + m)

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
       if(l1 == NULL) return l2;
       else if(l2 == NULL) return l1;
       else if(l1->val < l2->val) {
           l1->next = mergeTwoLists(l1->next, l2);
           return l1;
       } else {
           l2->next = mergeTwoLists(l1, l2->next);
           return l2;
       }
    }
};