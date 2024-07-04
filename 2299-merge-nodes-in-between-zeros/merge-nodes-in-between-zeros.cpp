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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* t = head;
        int c = 0;
        ListNode* x=NULL;
        ListNode* y = NULL;
        while(t)
        {
            if(t->val==0)
            {
                if(c!=0)
                {
                    ListNode* v = new ListNode(c);
                    if(x==NULL && y == NULL)
                    {
                        
                        x = v;
                        y = v;
                    }
                    else
                    {
                        y->next=v;
                        y = v;
                    }
                }
                c = 0;
            }
            else
            {
                c+=t->val;
            }
            t = t->next;
        }
        return x;
    }
};