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
   void Inorder(TreeNode* root,vector<int>&v,int &x){
       if(root==NULL or x==1)
       {
           return;
       }
       Inorder(root->left,v,x);
       if(v.size()==0) v.push_back(root->val);
       else if(v.size()!=0 and v.back()<root->val){
           v.push_back(root->val);
           cout<<root->val<<endl;
       }
       else{
           
           x = 1; 
         
       }
       Inorder(root->right,v,x);
   }
    bool isValidBST(TreeNode* root) {
        vector<int>v;
        int x=0;
        Inorder(root,v,x);
        if(x==0) return true;
        return false;
    }
};