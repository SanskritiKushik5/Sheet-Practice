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
    ListNode* reverseList(ListNode* head) {
        // if(head == NULL || head->next == NULL){
        //     return head;
        // }
        // ListNode* newhead = reverseList(head->next);
        // head->next->next = head;
        // head->next = NULL;
        // return newhead;
        ListNode* t1 = head;
        ListNode* t2 = head;
        vector<int> v;
        while(t1){
            v.push_back(t1->val);
            t1 = t1->next;
        }
        reverse(v.begin(), v.end());
        int i = 0;
        while(t2){
            t2->val = v[i];
            t2 = t2->next;
            ++i;
        }
        return head;
    }
};
