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
    void Inorder(TreeNode* root)
    {
        if(root==NULL) return;
        if(root!=NULL and root->right==NULL and root->left!=NULL)
        {   
            TreeNode* n = root->left;
            root->left=NULL; 
            root->right = n;
            if(root->left==NULL) cout<<"kjhgf"<<endl;
            //cout<<root->right->val<<" "<<endl;
            if(root->right->left==NULL and root->right->right==NULL) return;
        }
        else if(root!=NULL and root->left==NULL and root->right!=NULL)
        {
            TreeNode* n = root->right;
            root->right = NULL;
            root->left=n;  
             //cout<<root->left->val<<" "<<endl;
            if(root->left->left==NULL and root->left->right==NULL) return;
        }
        else if(root!=NULL and root->left!=NULL and root->right!=NULL)
        {
            TreeNode* n = root->left;
            root->left = root->right;
            root->right=n;  
          // if((root->left->left==NULL and root->left->right==NULL) or root->right->left==NULL and root->right->right==NULL) return;
        }
        Inorder(root->left);
        Inorder(root->right);
      }
    TreeNode* invertTree(TreeNode* root) {
        Inorder(root);
        return root;
    }
};