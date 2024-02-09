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
    int flag = 0;
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    void Inorder(TreeNode* root,int &flag)
    {
        if(root==NULL) return;
        if(root!=NULL and root->left==NULL and root->right!=NULL)
        {
          if(root->val!=root->right->val)
            {
                flag = 1;
                return;
            }   
        }
        if(root!=NULL and root->left!=NULL and root->right!=NULL)
        {
            if(root->val!=root->left->val+root->right->val)
            {
                flag = 1;
                return;
            }
        }
         if(root!=NULL and root->right==NULL and root->left!=NULL)
        {
          if(root->val!=root->left->val)
            {
                flag = 1;
                return;
            }   
        }
        Inorder(root->left,flag);
        Inorder(root->right,flag);
      }
    bool checkTree(TreeNode* root) {
        if(root==NULL) return 0;
        Inorder(root,flag);
        if(flag==1) return 0;
        return 1;
    }
};