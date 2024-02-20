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
   void recursion(TreeNode* root,int k , int &sum){
       if(root==NULL) return;
       if(root!=NULL and root->left==NULL and root->right==NULL){
           k = k*10+root->val;
         sum+=k;
           return;
       }
       k = k*10+root->val;
       recursion(root->left,k,sum);
       recursion(root->right,k,sum);
   }
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        recursion(root,0,sum);
        return sum;
    }
};