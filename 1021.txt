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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head = l1;
        vector<int> v;
        if(l1 == NULL)   
            return l2;
        else if(l2 == NULL) 
            return l1;
        while(head != NULL){
            v.push_back(head->val);
            head = head->next;
        }
        head = l2;
        while(head != NULL){
            v.push_back(head->val);
            head = head->next;
        }
        sort(v.begin(), v.end());
        head = l1;
        ListNode *pre;
        for(int i = 0; i < v.size(); i++){
            if(head->next == NULL)
                head->next = l2;
            head->val = v[i];
         //   cout << head->val << endl;
            pre = head;
            head = head->next;
        }
        pre->next = NULL;
        return l1;
    }
};