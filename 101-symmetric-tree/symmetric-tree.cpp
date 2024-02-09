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
    void Inorder(TreeNode* root,vector<int>&v)
    {    
        if(root==NULL)
        {
            return;
        }
        Inorder(root->left,v);
        if(root!=NULL and root->right!=NULL and root->left==NULL)
        {
            v.push_back(-120);
        }
         v.push_back(root->val);
         if(root!=NULL and root->right==NULL and root->left!=NULL)
        {
            v.push_back(-120);
        }
        Inorder(root->right,v);
    }
    bool isSymmetric(TreeNode* root) {
        vector<int>v;
        Inorder(root,v);
        if(root==NULL) return true;
        if(root!=NULL and root->left!=NULL and root->right!=NULL)
        {
            if(root->right->val!=root->left->val)
            {
                return false;
            }
        }
        int i = 0;
        int j = v.size()-1;
        // for(int i = 0 ; i<=v.size()-1;i++)
        // {
        //     cout<<v[i]<<" ";
        // }
        while(i<=j)
        {
            if(v[i]!=v[j]) return false;
            i+=1;
            j-=1;
        }
        return true;
    }
};