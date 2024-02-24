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
    void recursion(TreeNode* p,TreeNode* q){
         if(p==NULL and q==NULL) return;
        if(p!=NULL and q!=NULL and q!=p) p->val+=q->val;
        if(p==NULL and q!=NULL) p=q;
        if(p!=NULL and q==NULL) return;
        if((p!=NULL and q!=NULL) and (p->left==NULL and q->left!=NULL)) {
            p->left = q->left;
        }
        if((p!=NULL and q!=NULL) and (p->right==NULL and q->right!=NULL)) {
            p->right = q->right;
        }
        recursion(p->left,q->left);
        recursion(p->right,q->right);
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL and root2==NULL) return root1;
        if(root1==NULL and root2!=NULL) return root2;
        if(root1!=NULL and root2==NULL) return root1;
        TreeNode* p = root1;
        recursion(p,root2);
        return root1;
    }
};