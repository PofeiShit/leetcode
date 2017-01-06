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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* newList = head;
        stack<int> s;
        int cnt = 1;
        while(head != NULL){
            s.push(head->val);
            head = head->next;
        }
        newList->next = NULL;
        while(!s.empty()){
            if(cnt != n){
                ListNode* tmp = new ListNode(s.top());
                tmp->next = newList->next;
                newList->next = tmp;
            }
            s.pop();
            cnt++;
        }
        return newList->next;
    }
};