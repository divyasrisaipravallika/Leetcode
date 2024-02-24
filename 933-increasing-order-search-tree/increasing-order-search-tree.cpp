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
    vector<int>v;
    void Inorder(TreeNode* root){
        if(root==NULL) return;
        Inorder(root->left);
        v.push_back(root->val);
        Inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        Inorder(root);
        sort(v.begin(),v.end());
        TreeNode* t = new TreeNode(v[0]);
        TreeNode* o = t;
        for(int i = 1 ; i < v.size() ;i++){
            t->right = new TreeNode(v[i]);
            t = t->right;
        }
        return o;
    }
};