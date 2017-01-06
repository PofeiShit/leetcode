/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) { 
    ListNode dummy(0);
    ListNode* pNext = &dummy;
    int carry = 0;
    while (l1 || l2)
    {
        int a = l1 == NULL ? 0 : l1->val;
        int b = l2 == NULL ? 0 : l2->val;
        int sum = a + b + carry;
        ListNode* node = new ListNode(sum % 10);
        carry = sum / 10;
        pNext->next = node;
        pNext = node;
        if(l1)
            l1 = l1->next;
        if(l2)
            l2 = l2->next;
    }
    if (carry)
        pNext->next = new ListNode(1);
    
    return dummy.next;
    }
};