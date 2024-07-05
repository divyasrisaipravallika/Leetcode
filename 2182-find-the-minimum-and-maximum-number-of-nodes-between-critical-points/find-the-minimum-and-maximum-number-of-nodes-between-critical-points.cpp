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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>c;
        ListNode* prev = head;
        ListNode* cur = head->next;
        int p = 0;
        while(cur!=NULL and prev!=NULL){
            if(cur->next!=NULL){
                int x = prev->val;
                int y = cur->val;
                int z = cur->next->val;
                if(y>z and y>x) c.push_back(p);
                else if(y<z and y<x) c.push_back(p);
            }
            cur = cur->next;
            prev = prev->next;
            p++;
        }
        if(c.size()<=1) return {-1,-1};
        int m = INT_MAX;
        int n = c.back()-c.front();
        for (int i = 1; i < c.size(); i++) {
            m = min(m, c[i] - c[i - 1]);
        }
        return {m,n};
    }
};