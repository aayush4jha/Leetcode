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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode;
        ListNode* p = head;
        int carry = 0;
        while(l1 || l2 || carry) {
            int x = (l1 ? l1->val : 0);
            x += (l2 ? l2->val : 0);
            x += carry;
            carry = x/10;
            
            p->next = new ListNode(x % 10);
            
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
            p = p->next;
        }

        return head->next;
    }
};