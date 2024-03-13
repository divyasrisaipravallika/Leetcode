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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL) return head;
        ListNode* s = head;
        ListNode* f = head->next;
        while(s!=NULL and s->next!=NULL and f!=NULL){
            int c = s->val;
            s->val = f->val;
            f->val = c;
            if(f->next==NULL) break;
            f = f->next->next;
            s = s->next->next;
        }
        // if(s!=NULL) cout<<s->val;
        // if(f!=NULL) cout<<f->val;
        return head;
    }
};