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
   vector<vector<int>>m;
   void recursion(TreeNode* root,vector<int>v){
       if(root==NULL) return;
       if(root!=NULL and root->left==NULL and root->right==NULL){
           v.push_back(root->val);
           m.push_back(v);
           return;
       }
       v.push_back(root->val);
       recursion(root->left,v);
       recursion(root->right,v);
   }
    int sumNumbers(TreeNode* root) {
        recursion(root,{});
        int sum = 0;
        for(int i = 0 ; i < m.size(); i++){
            int k = 0;
            for(int j = 0 ; j < m[i].size(); j++){
                k = k*10+ m[i][j];
            }
            sum+=k;
        }
        return sum;
    }
};