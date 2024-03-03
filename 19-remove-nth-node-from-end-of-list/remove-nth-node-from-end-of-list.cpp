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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int c = 0;
        while(temp)
        {
            c+=1;
            temp=temp->next;
        }
        int k = abs((c-n)+1);
        ListNode* t = head;
        cout<<k;
        if(k==1) 
        {
            return head=head->next;
        }
        while(k-2>0 && t->next->next!=NULL)
        {
            t = t->next;
            k-=1;
        }
        t->next=t->next->next;
        return head;
        
    }
};