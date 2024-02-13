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
   void Inorder(TreeNode* root,vector<int>&v,vector<int>&a,set<int>&x){
       if(root==NULL)
       {
           return;
       }
       Inorder(root->left,v,a,x);
       v.push_back(root->val);
       a.push_back(root->val);
       x.insert(root->val);
       Inorder(root->right,v,a,x);
   }
    bool isValidBST(TreeNode* root) {
        vector<int>v;
        vector<int>a;
        set<int>x;
        Inorder(root,v,a,x);
        sort(v.begin(),v.end());
        if(x.size()!=v.size()) return 0;
        return v==a;
    }
};