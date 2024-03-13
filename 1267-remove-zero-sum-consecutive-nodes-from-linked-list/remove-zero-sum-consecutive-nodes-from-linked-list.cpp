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
    ListNode* removeZeroSumSublists(ListNode* head) {
        if(head == NULL) return head;
        ListNode* temp = head;
        vector<int>v;
        while(temp){
            v.push_back(temp->val);
            temp = temp->next;
        }
        int i = 0 ;
        int m = 0 ;

        map<int,int>map;
        while(i < v.size()){
            m += v[i];
            if(map.find(m-0) != map.end()){
                int c = map[m-0];
                v.erase(v.begin()+c+1,v.begin()+i+1);
                map.clear();
                i = 0;
                m  = 0;
            }
            else if(m == 0){
                v.erase(v.begin(),v.begin()+i+1);
                i = 0;
                map.clear();
                m = 0;
            }
            else{
                map[m] = i;
                i++;
            }
        }
        ListNode* h = NULL;
        ListNode* t = NULL;
        for(int i = 0 ; i < v.size() ; i++){
            ListNode* n = new ListNode(v[i]);
            if(h == NULL and t == NULL){
                h = n ;
                t = n ;
            }
            else{
                t->next = n;
                t = n;
            }
        }
         return h;
    }
};