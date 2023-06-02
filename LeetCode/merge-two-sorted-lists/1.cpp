// Approach-1: Iteration
// Time Complexity: O(n + m)
// Space Complexity: O(1)

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *list3 = new ListNode(), *head = list3;
        while(list1 && list2) {
            if(list1->val <= list2->val) {
                list3->next = list1;
                list1 = list1->next;
            } else {
                list3->next = list2;
                list2 = list2->next;
            }
            list3 = list3->next;
        }
        if(list1){list3->next = list1;}
        if(list2){list3->next = list2;}

        return head->next;
    }
};