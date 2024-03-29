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
    void recursion(TreeNode* root,vector<int>&v){
        if(root==NULL){
            return;
        }
        v.push_back(root->val);
        recursion(root->left,v);
        recursion(root->right,v);
    }
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        vector<int>v;
        recursion(root,v);
        TreeNode* temp = root;
        for(int i = 1; i<v.size(); i++){
            temp->right= new TreeNode(v[i]);
            temp->left=NULL;
            temp=temp->right;
        }
    }
};