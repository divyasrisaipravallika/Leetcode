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
    int ans=0;
    vector<int> backtrack(TreeNode* root){
        if(root==NULL) return {0,0};
        if(root!=NULL and root->left==NULL and root->right==NULL){
            ans++;
            return {root->val,1};
        }
        vector<int>a = backtrack(root->left);
        vector<int> b = backtrack(root->right);
        int sum = root->val+a[0]+b[0];
        int c = a[1]+b[1]+1;
        if((sum/c)==root->val) ans++;
        cout<<sum<<" "<<c<<endl;
        return {sum,c};
    }
    int averageOfSubtree(TreeNode* root) {
        backtrack(root);
        return ans;
    }
};