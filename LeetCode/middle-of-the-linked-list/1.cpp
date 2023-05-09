// https://leetcode.com/problems/middle-of-the-linked-list

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *p1 = head, *p2 = head;
        while(p2 != nullptr && p2->next != nullptr) {
            p1 = p1->next; // slow
            p2 = p2->next->next; // fast
        }
        return p1;
    }
};