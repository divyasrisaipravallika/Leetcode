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
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        ListNode* s = head;
        ListNode* f = head;
         if(head->next!=NULL)
        {
            s = s->next;
            f = f->next->next;
        }
        while(true)
        {    
            if(f==NULL || f->next==NULL)
            {
                return false;
            }
            if(s==f)
            {
                return true;
            }
            f = f->next->next;
            s = s->next;
        }
    }
};