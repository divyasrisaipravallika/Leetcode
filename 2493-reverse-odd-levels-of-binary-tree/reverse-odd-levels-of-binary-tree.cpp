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
    TreeNode* reverseOddLevels(TreeNode* root) {
      queue<TreeNode*>q;
      vector<TreeNode*>v;
      q.push(root);
      while(!q.empty()){
          int s = q.size();
          for(int i = 0 ; i<s; i++){
              TreeNode* temp = q.front();
              q.pop();
              v.push_back(temp);
              if(temp->left!=NULL) q.push(temp->left);
              if(temp->right!=NULL) q.push(temp->right);
          }
      }
      cout<<v.size();
      int j = 1;
      for(int i = 1 ; i < v.size(); i++){
          int c = 0;
          if(j%2){
              int k = pow(2,j);
              int a = i;
              int b = i+k-1;
              while(a<b){
                  int t = v[a]->val;
                  v[a]->val = v[b]->val;
                  v[b]->val = t;
                  a++;
                  b--;
              }
          }
         i+=pow(2,j)-1;
          j++;
      }
      return root;
    }
};