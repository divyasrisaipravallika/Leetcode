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
    bool f = false;
    void recursion(TreeNode* root,int sum,int t){
        if(root==NULL or f==true){
            return;
        }
        if(root!=NULL and root->left==NULL and root->right==NULL){
            sum+=root->val;
            if(sum==t) f = true;
            return;
        }
        sum+=root->val;
        recursion(root->left,sum,t);
        recursion(root->right,sum,t);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return 0;
        recursion(root,0,targetSum);
        return f;
    }
};