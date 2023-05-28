// https://leetcode.com/problems/print-immutable-linked-list-in-reverse

class Solution {
public:
    void printLinkedListInReverse(ImmutableListNode* head) {
        if(!head) return;
        printLinkedListInReverse(head->getNext());
        head->printValue();
    }
};