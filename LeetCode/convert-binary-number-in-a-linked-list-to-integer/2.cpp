// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int num = head->val ;
        
        while(head->next != nullptr) {
            num = (num << 1) | head->next->val;
            head = head->next;
        }

        return num;
    }
};