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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> v(m, vector<int>(n, -1));
        int i = 0, j = 0;
        int f = 0;
        int c = 0, d = 0;
        int a = m, b = n;
        int k = 0;
        while(head!=nullptr){
            k++;
            if(k>a*b) return v;
            if(f==0 and j < n){
                v[i][j] = head->val;
                j++;
                if(j==n){
                    f = 1;
                    n--;
                    i++;
                    j--;
                }
            }
            else if(f==1 and i < m){
                v[i][j] = head->val;
                i++;
                if(i==m){
                    f = 2;
                    m--;
                    i--;
                    j--;
                }
            }
            else if(f==2 and j>=d){
                v[i][j] = head->val;
                if(j==d) {
                    f = 3;
                    c++;
                    i--;
                }
                else j--;
            }
            else if(f==3 and i>=c){
               v[i][j] = head->val;
                if(i==c){
                    f = 0;
                    d++;
                    j++;
                }
                else i--;
            }
            head = head->next;
        }
        return v;
    }
};