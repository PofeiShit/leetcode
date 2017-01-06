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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* newList, *head, *pre;
        vector<int> v;
        int sz = lists.size();
        int cnt = 0;
        if(sz == 0) 
            return NULL;
        for(int i = 0; i <sz; ++i){
            head = lists[i];
            while(head != NULL){
                v.push_back(head->val);
                head = head->next;
                cnt++;
            }
        }
        if(cnt == 0)
            return NULL;
        sort(v.begin(), v.end());
        int s;
        for(s = 0; s < sz; ++s){
            if(lists[s] != NULL){
                head = lists[s];
                newList = lists[s];
                break;
            }
        }
        ++s;
        for(int i = 0; i < cnt; ){
            if(head->next == NULL)
                head->next = lists[s++];
            else{
                head->val = v[i++];
               // cout << head->val << endl;
                pre = head;
                head = head->next;
            }
        }
        if(pre != NULL)
            pre->next = NULL;
        return newList;
    }
};