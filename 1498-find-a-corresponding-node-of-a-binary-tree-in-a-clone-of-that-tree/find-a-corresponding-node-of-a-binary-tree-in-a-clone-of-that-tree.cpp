/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans;
    void Inorder(TreeNode* root,int val){
        if(root==NULL) return;
        Inorder(root->left,val);
        if(root->val==val) ans=root;
        Inorder(root->right,val);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        Inorder(cloned,target->val);
        return ans;
    }
};