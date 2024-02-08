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
    void Inorder(TreeNode* root,int c,vector<int>&s)
    {
        if(root==NULL)
        {   
            return;
        }
        if(root->left==NULL and root->right==NULL){
            s.push_back(c+1);
        }
        Inorder(root->left,c+1,s);
        Inorder(root->right,c+1,s);
    }
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        vector<int>s;
        int c = 0;
        Inorder(root,c,s);
        return *max_element(s.begin(),s.end());
    }
};