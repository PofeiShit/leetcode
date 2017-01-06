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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* nextNode = head->next;
        ListNode* pre = NULL;
        ListNode* nowNode = head;
        ListNode* newList = head->next;
        while(nowNode != NULL && nextNode != NULL){
            nowNode->next = nextNode->next;//1->3  //3->null
            nextNode->next = nowNode;//2->1     //4->3
            pre = nowNode;//1 //3
            nowNode = nowNode->next;//3 //null
            if(nowNode == NULL)
                break;
            if(nowNode->next == NULL)
                break;
            nextNode = nowNode->next;//4
            pre->next = nextNode;// 1->4
        }
        return newList;
    }
};