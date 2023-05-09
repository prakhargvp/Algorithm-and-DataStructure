// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int binary = 0, num = 0, pow2 = 0;
        vector<int> bnums;
        
        while(head != nullptr) {
            bnums.insert(bnums.begin(), head->val);
            head = head->next;
        }

        for(int bnum: bnums){
            num += (bnum % 10) * pow(2, pow2++); 
        }

        return num;
    }
};