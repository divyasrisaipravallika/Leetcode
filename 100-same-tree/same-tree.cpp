/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void Inorder(TreeNode* p, TreeNode* q, int &flag)
    {
       
        if((p!=NULL and q==NULL) or (q!=NULL and p==NULL))
        {
            flag = 1;
            return;
        }
        if(p==NULL or q==NULL) return;
        Inorder(p->left,q->left,flag);
        if(p->val!=q->val)
        {
            flag=1;
            return;
        }
        Inorder(p->right,q->right,flag);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        int flag=0;
        Inorder(p,q,flag);
        if(flag==0) return true;
        return false;
    }
};